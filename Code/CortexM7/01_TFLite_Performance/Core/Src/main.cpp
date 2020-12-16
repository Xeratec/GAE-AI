/**
 ******************************************************************************
 * @file           : main.cpp
 * @brief          : AI based Guitar Amplifier Emulation
 ******************************************************************************
 */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include <stdio.h>

/* Private includes ----------------------------------------------------------*/
#define LINE_CLEAR      "\e[1A\r\e[K"
#define SCREEN_CLEAR    "\e[2J\e[H"

#include "tensorflow/lite/micro/kernels/micro_ops.h"
//#include "tensorflow/lite/micro/all_ops_resolver.h"
#include "tensorflow/lite/micro/micro_mutable_op_resolver.h"
#include "tensorflow/core/public/version.h"
#include "tensorflow/lite/micro/micro_error_reporter.h"
#include "tensorflow/lite/micro/micro_interpreter.h"
#include "tensorflow/lite/version.h"
#include "04_OrangeMicroDark_WN12_v1_tfl.h"
//#include "NoDilation.h"

#include "tensorflow/lite/micro/debug_log.h"
#include "CycleCounter.h"

/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/
#define GENERATE_OUTPUT 0

#if GENERATE_OUTPUT
#include "audio.h"
#else
#include "audio_short.h"
#endif

/* Private macro -------------------------------------------------------------*/
#define MACRO_VARIABLE_TO_STRING(Variable) (void(Variable),#Variable)

/* Private variables ---------------------------------------------------------*/
UART_HandleTypeDef huart3;


namespace {
	tflite::ErrorReporter *error_reporter = nullptr;
	const tflite::Model *model = nullptr;
	tflite::MicroInterpreter *interpreter = nullptr;
	TfLiteTensor *model_input = nullptr;
	TfLiteTensor *model_output = nullptr;
}// namespace

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_USART3_UART_Init(void);

extern "C" {
PUTCHAR_PROTOTYPE {
	/* Place your implementation of fputc here */
	/* e.g. write a character to the serial port and Loop until the end of transmission */
	while (HAL_OK != HAL_UART_Transmit(&huart3, (uint8_t*) &ch, 1, 30000)) {
		;
	}
	return ch;
}
}

/* Private user code ---------------------------------------------------------*/

/**
 * @brief  The application entry point.
 * @retval int
 */
int main(void) {
	TfLiteStatus tflite_status;
	uint32_t num_elements;
	float y_val;

	const int kTensorArenaSize = 60 * 1024;
	static uint8_t tensor_arena[kTensorArenaSize]  __attribute__((aligned (16)));

	/* Enable I-Cache---------------------------------------------------------*/
	SCB_EnableICache();

	/* Enable D-Cache---------------------------------------------------------*/
	SCB_EnableDCache();

	/* MCU Configuration--------------------------------------------------------*/
	/* Reset of all peripherals, Initializes the Flash interface and the Systick. */
	HAL_Init();

	/* Configure the system clock */
	SystemClock_Config();

	/* Initialize all configured peripherals */
	MX_GPIO_Init();
	MX_USART3_UART_Init();

	dwt_access_enable(true);
#if !GENERATE_OUTPUT
	printf(SCREEN_CLEAR);
#endif
	printf("### Guitar Amplifier Emulation V0.1 ###\r\n");
	printf("# Clock Frequency: %3.1f MHz\r\n" ,HAL_RCC_GetHCLKFreq()/1000000.0f);
	printf("# TF Version     : %s\r\n" , TF_VERSION_STRING);
	printf("# Model          : %s\r\n" , MACRO_VARIABLE_TO_STRING(OrangeMicroDark_WN12_v1));

	static tflite::MicroErrorReporter micro_error_reporter;
	error_reporter = &micro_error_reporter;
	// Map the model into a usable data structure
	model = tflite::GetModel(OrangeMicroDark_WN12_v1);
	if (model->version() != TFLITE_SCHEMA_VERSION) {
		error_reporter->Report("Model version does not match Schema");
		while (1)
			;
	}

	//tflite::AllOpsResolver op_resolver;
	tflite::MicroMutableOpResolver<6> op_resolver;

	tflite_status = op_resolver.AddDepthwiseConv2D();
	if (tflite_status != kTfLiteOk) {
		error_reporter->Report("Could not add DepthwiseConv2D op");
		while (1)
			;
	}

	tflite_status = op_resolver.AddDequantize();
	if (tflite_status != kTfLiteOk) {
		error_reporter->Report("Could not add AddDequantize op");
		while (1)
			;
	}

	tflite_status = op_resolver.AddQuantize();
	if (tflite_status != kTfLiteOk) {
		error_reporter->Report("Could not add AddQuantize op");
		while (1)
			;
	}

	tflite_status = op_resolver.AddConv2D();
	if (tflite_status != kTfLiteOk) {
		error_reporter->Report("Could not add CONV2D op");
		while (1)
			;
	}

	tflite_status = op_resolver.AddReshape();
	if (tflite_status != kTfLiteOk) {
		error_reporter->Report("Could not add RESHAPE op");
		while (1)
			;
	}

	tflite_status = op_resolver.AddTanh();
	if (tflite_status != kTfLiteOk) {
		error_reporter->Report("Could not add Tanh op");
		while (1)
			;
	}

	//Build an interpreter to run the model
	static tflite::MicroInterpreter static_interpreter(model, op_resolver,
			tensor_arena, kTensorArenaSize, error_reporter);
	interpreter = &static_interpreter;

	// Allocate memory from the tensor_arena for the model's tensors.
	tflite_status = interpreter->AllocateTensors();
	if (tflite_status != kTfLiteOk) {
		error_reporter->Report("AllocateTensors() failed");
		while (1)
			;
	}
	// Assign model input and output buffers (tensors) to pointers
	model_input = interpreter->input(0);
	model_output = interpreter->output(0);
	// Get number of elements in input tensor
	num_elements = model_input->bytes / sizeof(float);


#if GENERATE_OUTPUT
	printf("# Input Size     : %lu\r\n", num_elements);
	printf("# Audio Size     : %lu\r\n", audio_size/(sizeof(float)));
	printf("# Audio Output   : %lu\r\n", audio_size/(sizeof(float))-num_elements+1);
	printf("#\r\n");

	ResetTimer();
	StartTimer();
	for (uint32_t i=0; i < int(audio_size/(sizeof(float)))-num_elements+1; i++) {
		memcpy((void*) model_input->data.f, (void*) &audio+i*sizeof(float), num_elements*sizeof(float));

		tflite_status = interpreter->Invoke();

		if (tflite_status != kTfLiteOk) {
			error_reporter->Report("Invoke failed");
		}

		y_val = model_output->data.f[0];
		printf("%.14e\r\n", y_val);
	}
	StopTimer();

	float time = 1.0f* getCycles() / HAL_RCC_GetHCLKFreq();
	printf("#Time   : %.2f s\r\n", time);
	printf("#Average: %.2f ms\r\n", 1000.0f * time / (audio_size/(sizeof(float))-num_elements+1));
#endif


	/* Infinite loop */
	while (1) {
#if !GENERATE_OUTPUT

		memcpy((void*) model_input->data.f, (void*) &audio_short, num_elements*sizeof(float));

		ResetTimer();
		StartTimer();
		tflite_status = interpreter->Invoke();
		StopTimer();

		if (tflite_status != kTfLiteOk) {
			error_reporter->Report("Invoke failed");
		}

		y_val = model_output->data.f[0];

		printf(LINE_CLEAR);
		printf("%1.3f (%.3f ms)\r\n", y_val,
				1000.0f * getCycles() / HAL_RCC_GetHCLKFreq());

		HAL_Delay(100);
#endif
	}
}

/**
 * @brief System Clock Configuration
 * @retval None
 */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};
  RCC_PeriphCLKInitTypeDef PeriphClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 8;
  RCC_OscInitStruct.PLL.PLLN = 216;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 2;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Activate the Over-Drive mode
  */
  if (HAL_PWREx_EnableOverDrive() != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK)
  {
    Error_Handler();
  }
  PeriphClkInitStruct.PeriphClockSelection = RCC_PERIPHCLK_USART3;
  PeriphClkInitStruct.Usart3ClockSelection = RCC_USART3CLKSOURCE_PCLK1;
  if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
 * @brief USART1 Initialization Function
 * @param None
 * @retval None
 */
static void MX_USART3_UART_Init(void) {
	huart3.Instance = USART3;
	huart3.Init.BaudRate = 115200;
	huart3.Init.WordLength = UART_WORDLENGTH_8B;
	huart3.Init.StopBits = UART_STOPBITS_1;
	huart3.Init.Parity = UART_PARITY_NONE;
	huart3.Init.Mode = UART_MODE_TX_RX;
	huart3.Init.HwFlowCtl = UART_HWCONTROL_NONE;
	huart3.Init.OverSampling = UART_OVERSAMPLING_16;
	huart3.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;
	huart3.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;
	if (HAL_UART_Init(&huart3) != HAL_OK) {
		Error_Handler();
	}
}

/**
 * @brief GPIO Initialization Function
 * @param None
 * @retval None
 */
static void MX_GPIO_Init(void) {

	/* GPIO Ports Clock Enable */
	__HAL_RCC_GPIOD_CLK_ENABLE();

}

/**
 * @brief  This function is executed in case of error occurrence.
 * @retval None
 */
void Error_Handler(void) {
	/* User can add his own implementation to report the HAL error return state */
	__disable_irq();
	while (1) {
	}
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
