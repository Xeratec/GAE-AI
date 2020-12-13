/**
  ******************************************************************************
  * @file    wn12.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Sat Dec  5 16:28:28 2020
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2018 STMicroelectronics.
  * All rights reserved.
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */


#include "wn12.h"

#include "ai_platform_interface.h"
#include "ai_math_helpers.h"

#include "core_common.h"
#include "layers.h"



#undef AI_TOOLS_VERSION_MAJOR
#undef AI_TOOLS_VERSION_MINOR
#undef AI_TOOLS_VERSION_MICRO
#define AI_TOOLS_VERSION_MAJOR 5
#define AI_TOOLS_VERSION_MINOR 2
#define AI_TOOLS_VERSION_MICRO 0


#undef AI_TOOLS_API_VERSION_MAJOR
#undef AI_TOOLS_API_VERSION_MINOR
#undef AI_TOOLS_API_VERSION_MICRO
#define AI_TOOLS_API_VERSION_MAJOR 1
#define AI_TOOLS_API_VERSION_MINOR 3
#define AI_TOOLS_API_VERSION_MICRO 0

#undef AI_NET_OBJ_INSTANCE
#define AI_NET_OBJ_INSTANCE g_wn12
 
#undef AI_WN12_MODEL_SIGNATURE
#define AI_WN12_MODEL_SIGNATURE     "a7a8574fb79790f12d07830100f57544"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     "(rev-5.2.0)"
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "Sat Dec  5 16:28:28 2020"

#undef AI_TOOLS_COMPILE_TIME
#define AI_TOOLS_COMPILE_TIME    __DATE__ " " __TIME__

#undef AI_WN12_N_BATCHES
#define AI_WN12_N_BATCHES         (1)

/**  Forward network declaration section  *************************************/
AI_STATIC ai_network AI_NET_OBJ_INSTANCE;


/**  Forward network array declarations  **************************************/
AI_STATIC ai_array conv1d_11_bias_array;   /* Array #0 */
AI_STATIC ai_array conv1d_11_weights_array;   /* Array #1 */
AI_STATIC ai_array conv1d_10_bias_array;   /* Array #2 */
AI_STATIC ai_array conv1d_10_weights_array;   /* Array #3 */
AI_STATIC ai_array conv1d_9_bias_array;   /* Array #4 */
AI_STATIC ai_array conv1d_9_weights_array;   /* Array #5 */
AI_STATIC ai_array conv1d_8_bias_array;   /* Array #6 */
AI_STATIC ai_array conv1d_8_weights_array;   /* Array #7 */
AI_STATIC ai_array conv1d_7_bias_array;   /* Array #8 */
AI_STATIC ai_array conv1d_7_weights_array;   /* Array #9 */
AI_STATIC ai_array conv1d_6_bias_array;   /* Array #10 */
AI_STATIC ai_array conv1d_6_weights_array;   /* Array #11 */
AI_STATIC ai_array conv1d_5_bias_array;   /* Array #12 */
AI_STATIC ai_array conv1d_5_weights_array;   /* Array #13 */
AI_STATIC ai_array conv1d_4_bias_array;   /* Array #14 */
AI_STATIC ai_array conv1d_4_weights_array;   /* Array #15 */
AI_STATIC ai_array conv1d_3_bias_array;   /* Array #16 */
AI_STATIC ai_array conv1d_3_weights_array;   /* Array #17 */
AI_STATIC ai_array conv1d_2_bias_array;   /* Array #18 */
AI_STATIC ai_array conv1d_2_weights_array;   /* Array #19 */
AI_STATIC ai_array conv1d_1_bias_array;   /* Array #20 */
AI_STATIC ai_array conv1d_1_weights_array;   /* Array #21 */
AI_STATIC ai_array conv1d_bias_array;   /* Array #22 */
AI_STATIC ai_array conv1d_weights_array;   /* Array #23 */
AI_STATIC ai_array input_0_output_array;   /* Array #24 */
AI_STATIC ai_array conv1d_output_array;   /* Array #25 */
AI_STATIC ai_array conv1d_1_output_array;   /* Array #26 */
AI_STATIC ai_array conv1d_2_output_array;   /* Array #27 */
AI_STATIC ai_array conv1d_3_output_array;   /* Array #28 */
AI_STATIC ai_array conv1d_4_output_array;   /* Array #29 */
AI_STATIC ai_array conv1d_5_output_array;   /* Array #30 */
AI_STATIC ai_array conv1d_6_output_array;   /* Array #31 */
AI_STATIC ai_array conv1d_7_output_array;   /* Array #32 */
AI_STATIC ai_array conv1d_8_output_array;   /* Array #33 */
AI_STATIC ai_array conv1d_9_output_array;   /* Array #34 */
AI_STATIC ai_array conv1d_10_output_array;   /* Array #35 */
AI_STATIC ai_array conv1d_11_output_array;   /* Array #36 */


/**  Forward network tensor declarations  *************************************/
AI_STATIC ai_tensor conv1d_11_bias;   /* Tensor #0 */
AI_STATIC ai_tensor conv1d_11_weights;   /* Tensor #1 */
AI_STATIC ai_tensor conv1d_10_bias;   /* Tensor #2 */
AI_STATIC ai_tensor conv1d_10_weights;   /* Tensor #3 */
AI_STATIC ai_tensor conv1d_9_bias;   /* Tensor #4 */
AI_STATIC ai_tensor conv1d_9_weights;   /* Tensor #5 */
AI_STATIC ai_tensor conv1d_8_bias;   /* Tensor #6 */
AI_STATIC ai_tensor conv1d_8_weights;   /* Tensor #7 */
AI_STATIC ai_tensor conv1d_7_bias;   /* Tensor #8 */
AI_STATIC ai_tensor conv1d_7_weights;   /* Tensor #9 */
AI_STATIC ai_tensor conv1d_6_bias;   /* Tensor #10 */
AI_STATIC ai_tensor conv1d_6_weights;   /* Tensor #11 */
AI_STATIC ai_tensor conv1d_5_bias;   /* Tensor #12 */
AI_STATIC ai_tensor conv1d_5_weights;   /* Tensor #13 */
AI_STATIC ai_tensor conv1d_4_bias;   /* Tensor #14 */
AI_STATIC ai_tensor conv1d_4_weights;   /* Tensor #15 */
AI_STATIC ai_tensor conv1d_3_bias;   /* Tensor #16 */
AI_STATIC ai_tensor conv1d_3_weights;   /* Tensor #17 */
AI_STATIC ai_tensor conv1d_2_bias;   /* Tensor #18 */
AI_STATIC ai_tensor conv1d_2_weights;   /* Tensor #19 */
AI_STATIC ai_tensor conv1d_1_bias;   /* Tensor #20 */
AI_STATIC ai_tensor conv1d_1_weights;   /* Tensor #21 */
AI_STATIC ai_tensor conv1d_bias;   /* Tensor #22 */
AI_STATIC ai_tensor conv1d_weights;   /* Tensor #23 */
AI_STATIC ai_tensor input_0_output;   /* Tensor #24 */
AI_STATIC ai_tensor conv1d_output;   /* Tensor #25 */
AI_STATIC ai_tensor conv1d_1_output;   /* Tensor #26 */
AI_STATIC ai_tensor conv1d_2_output;   /* Tensor #27 */
AI_STATIC ai_tensor conv1d_3_output;   /* Tensor #28 */
AI_STATIC ai_tensor conv1d_4_output;   /* Tensor #29 */
AI_STATIC ai_tensor conv1d_5_output;   /* Tensor #30 */
AI_STATIC ai_tensor conv1d_6_output;   /* Tensor #31 */
AI_STATIC ai_tensor conv1d_7_output;   /* Tensor #32 */
AI_STATIC ai_tensor conv1d_8_output;   /* Tensor #33 */
AI_STATIC ai_tensor conv1d_9_output;   /* Tensor #34 */
AI_STATIC ai_tensor conv1d_10_output;   /* Tensor #35 */
AI_STATIC ai_tensor conv1d_11_output;   /* Tensor #36 */


/**  Forward network tensor chain declarations  *******************************/
AI_STATIC_CONST ai_tensor_chain conv1d_chain;   /* Chain #0 */
AI_STATIC_CONST ai_tensor_chain conv1d_1_chain;   /* Chain #1 */
AI_STATIC_CONST ai_tensor_chain conv1d_2_chain;   /* Chain #2 */
AI_STATIC_CONST ai_tensor_chain conv1d_3_chain;   /* Chain #3 */
AI_STATIC_CONST ai_tensor_chain conv1d_4_chain;   /* Chain #4 */
AI_STATIC_CONST ai_tensor_chain conv1d_5_chain;   /* Chain #5 */
AI_STATIC_CONST ai_tensor_chain conv1d_6_chain;   /* Chain #6 */
AI_STATIC_CONST ai_tensor_chain conv1d_7_chain;   /* Chain #7 */
AI_STATIC_CONST ai_tensor_chain conv1d_8_chain;   /* Chain #8 */
AI_STATIC_CONST ai_tensor_chain conv1d_9_chain;   /* Chain #9 */
AI_STATIC_CONST ai_tensor_chain conv1d_10_chain;   /* Chain #10 */
AI_STATIC_CONST ai_tensor_chain conv1d_11_chain;   /* Chain #11 */


/**  Forward network layer declarations  **************************************/
AI_STATIC ai_layer_conv2d conv1d_layer; /* Layer #0 */
AI_STATIC ai_layer_conv2d conv1d_1_layer; /* Layer #1 */
AI_STATIC ai_layer_conv2d conv1d_2_layer; /* Layer #2 */
AI_STATIC ai_layer_conv2d conv1d_3_layer; /* Layer #3 */
AI_STATIC ai_layer_conv2d conv1d_4_layer; /* Layer #4 */
AI_STATIC ai_layer_conv2d conv1d_5_layer; /* Layer #5 */
AI_STATIC ai_layer_conv2d conv1d_6_layer; /* Layer #6 */
AI_STATIC ai_layer_conv2d conv1d_7_layer; /* Layer #7 */
AI_STATIC ai_layer_conv2d conv1d_8_layer; /* Layer #8 */
AI_STATIC ai_layer_conv2d conv1d_9_layer; /* Layer #9 */
AI_STATIC ai_layer_conv2d conv1d_10_layer; /* Layer #10 */
AI_STATIC ai_layer_conv2d conv1d_11_layer; /* Layer #11 */


/**  Array declarations section  **********************************************/
/* Array#0 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_11_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)

/* Array#1 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_11_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 24, AI_STATIC)

/* Array#2 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_10_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 8, AI_STATIC)

/* Array#3 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_10_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 192, AI_STATIC)

/* Array#4 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_9_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 8, AI_STATIC)

/* Array#5 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_9_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 192, AI_STATIC)

/* Array#6 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_8_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 8, AI_STATIC)

/* Array#7 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_8_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 192, AI_STATIC)

/* Array#8 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_7_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 8, AI_STATIC)

/* Array#9 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_7_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 192, AI_STATIC)

/* Array#10 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_6_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 8, AI_STATIC)

/* Array#11 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_6_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 192, AI_STATIC)

/* Array#12 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_5_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 8, AI_STATIC)

/* Array#13 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_5_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 192, AI_STATIC)

/* Array#14 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_4_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 8, AI_STATIC)

/* Array#15 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_4_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 192, AI_STATIC)

/* Array#16 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_3_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 8, AI_STATIC)

/* Array#17 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_3_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 192, AI_STATIC)

/* Array#18 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_2_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 8, AI_STATIC)

/* Array#19 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_2_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 192, AI_STATIC)

/* Array#20 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_1_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 8, AI_STATIC)

/* Array#21 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_1_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 192, AI_STATIC)

/* Array#22 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 8, AI_STATIC)

/* Array#23 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 24, AI_STATIC)

/* Array#24 */
AI_ARRAY_OBJ_DECLARE(
  input_0_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 253, AI_STATIC)

/* Array#25 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2008, AI_STATIC)

/* Array#26 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_1_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1976, AI_STATIC)

/* Array#27 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_2_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1912, AI_STATIC)

/* Array#28 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_3_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1784, AI_STATIC)

/* Array#29 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_4_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1528, AI_STATIC)

/* Array#30 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_5_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1016, AI_STATIC)

/* Array#31 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_6_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1000, AI_STATIC)

/* Array#32 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_7_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 968, AI_STATIC)

/* Array#33 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_8_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 904, AI_STATIC)

/* Array#34 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_9_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 776, AI_STATIC)

/* Array#35 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_10_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 520, AI_STATIC)

/* Array#36 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_11_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 1, AI_STATIC)

/**  Tensor declarations section  *********************************************/
/* Tensor #0 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_11_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &conv1d_11_bias_array, NULL)

/* Tensor #1 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_11_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 8, 1, 3, 1), AI_STRIDE_INIT(4, 4, 32, 32, 96),
  1, &conv1d_11_weights_array, NULL)

/* Tensor #2 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_10_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv1d_10_bias_array, NULL)

/* Tensor #3 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_10_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 8, 1, 3, 8), AI_STRIDE_INIT(4, 4, 32, 32, 96),
  1, &conv1d_10_weights_array, NULL)

/* Tensor #4 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_9_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv1d_9_bias_array, NULL)

/* Tensor #5 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_9_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 8, 1, 3, 8), AI_STRIDE_INIT(4, 4, 32, 32, 96),
  1, &conv1d_9_weights_array, NULL)

/* Tensor #6 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_8_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv1d_8_bias_array, NULL)

/* Tensor #7 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_8_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 8, 1, 3, 8), AI_STRIDE_INIT(4, 4, 32, 32, 96),
  1, &conv1d_8_weights_array, NULL)

/* Tensor #8 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_7_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv1d_7_bias_array, NULL)

/* Tensor #9 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_7_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 8, 1, 3, 8), AI_STRIDE_INIT(4, 4, 32, 32, 96),
  1, &conv1d_7_weights_array, NULL)

/* Tensor #10 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_6_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv1d_6_bias_array, NULL)

/* Tensor #11 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_6_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 8, 1, 3, 8), AI_STRIDE_INIT(4, 4, 32, 32, 96),
  1, &conv1d_6_weights_array, NULL)

/* Tensor #12 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_5_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv1d_5_bias_array, NULL)

/* Tensor #13 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_5_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 8, 1, 3, 8), AI_STRIDE_INIT(4, 4, 32, 32, 96),
  1, &conv1d_5_weights_array, NULL)

/* Tensor #14 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_4_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv1d_4_bias_array, NULL)

/* Tensor #15 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_4_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 8, 1, 3, 8), AI_STRIDE_INIT(4, 4, 32, 32, 96),
  1, &conv1d_4_weights_array, NULL)

/* Tensor #16 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_3_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv1d_3_bias_array, NULL)

/* Tensor #17 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_3_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 8, 1, 3, 8), AI_STRIDE_INIT(4, 4, 32, 32, 96),
  1, &conv1d_3_weights_array, NULL)

/* Tensor #18 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_2_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv1d_2_bias_array, NULL)

/* Tensor #19 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_2_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 8, 1, 3, 8), AI_STRIDE_INIT(4, 4, 32, 32, 96),
  1, &conv1d_2_weights_array, NULL)

/* Tensor #20 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_1_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv1d_1_bias_array, NULL)

/* Tensor #21 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_1_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 8, 1, 3, 8), AI_STRIDE_INIT(4, 4, 32, 32, 96),
  1, &conv1d_1_weights_array, NULL)

/* Tensor #22 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv1d_bias_array, NULL)

/* Tensor #23 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 3, 8), AI_STRIDE_INIT(4, 4, 4, 4, 12),
  1, &conv1d_weights_array, NULL)

/* Tensor #24 */
AI_TENSOR_OBJ_DECLARE(
  input_0_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 253), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &input_0_output_array, NULL)

/* Tensor #25 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 251), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv1d_output_array, NULL)

/* Tensor #26 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_1_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 247), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv1d_1_output_array, NULL)

/* Tensor #27 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_2_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 239), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv1d_2_output_array, NULL)

/* Tensor #28 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_3_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 223), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv1d_3_output_array, NULL)

/* Tensor #29 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_4_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 191), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv1d_4_output_array, NULL)

/* Tensor #30 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_5_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 127), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv1d_5_output_array, NULL)

/* Tensor #31 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_6_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 125), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv1d_6_output_array, NULL)

/* Tensor #32 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_7_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 121), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv1d_7_output_array, NULL)

/* Tensor #33 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_8_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 113), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv1d_8_output_array, NULL)

/* Tensor #34 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_9_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 97), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv1d_9_output_array, NULL)

/* Tensor #35 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_10_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 65), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv1d_10_output_array, NULL)

/* Tensor #36 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_11_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &conv1d_11_output_array, NULL)



/**  Layer declarations section  **********************************************/


AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv1d_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &input_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv1d_weights, &conv1d_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv1d_layer, 0,
  CONV2D_TYPE,
  conv2d, forward_conv2d,
  &AI_NET_OBJ_INSTANCE, &conv1d_1_layer, AI_STATIC,
  .tensors = &conv1d_chain, 
  .groups = 1, 
  .nl_func = nl_func_tanh_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv1d_1_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv1d_1_weights, &conv1d_1_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv1d_1_layer, 1,
  CONV2D_TYPE,
  conv2d, forward_conv2d,
  &AI_NET_OBJ_INSTANCE, &conv1d_2_layer, AI_STATIC,
  .tensors = &conv1d_1_chain, 
  .groups = 1, 
  .nl_func = nl_func_tanh_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 2), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv1d_2_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv1d_2_weights, &conv1d_2_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv1d_2_layer, 2,
  CONV2D_TYPE,
  conv2d, forward_conv2d,
  &AI_NET_OBJ_INSTANCE, &conv1d_3_layer, AI_STATIC,
  .tensors = &conv1d_2_chain, 
  .groups = 1, 
  .nl_func = nl_func_tanh_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 4), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv1d_3_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_3_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv1d_3_weights, &conv1d_3_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv1d_3_layer, 3,
  CONV2D_TYPE,
  conv2d, forward_conv2d,
  &AI_NET_OBJ_INSTANCE, &conv1d_4_layer, AI_STATIC,
  .tensors = &conv1d_3_chain, 
  .groups = 1, 
  .nl_func = nl_func_tanh_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 8), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv1d_4_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_3_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_4_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv1d_4_weights, &conv1d_4_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv1d_4_layer, 4,
  CONV2D_TYPE,
  conv2d, forward_conv2d,
  &AI_NET_OBJ_INSTANCE, &conv1d_5_layer, AI_STATIC,
  .tensors = &conv1d_4_chain, 
  .groups = 1, 
  .nl_func = nl_func_tanh_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 16), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv1d_5_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_4_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_5_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv1d_5_weights, &conv1d_5_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv1d_5_layer, 5,
  CONV2D_TYPE,
  conv2d, forward_conv2d,
  &AI_NET_OBJ_INSTANCE, &conv1d_6_layer, AI_STATIC,
  .tensors = &conv1d_5_chain, 
  .groups = 1, 
  .nl_func = nl_func_tanh_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 32), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv1d_6_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_5_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_6_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv1d_6_weights, &conv1d_6_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv1d_6_layer, 6,
  CONV2D_TYPE,
  conv2d, forward_conv2d,
  &AI_NET_OBJ_INSTANCE, &conv1d_7_layer, AI_STATIC,
  .tensors = &conv1d_6_chain, 
  .groups = 1, 
  .nl_func = nl_func_tanh_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv1d_7_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_6_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_7_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv1d_7_weights, &conv1d_7_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv1d_7_layer, 7,
  CONV2D_TYPE,
  conv2d, forward_conv2d,
  &AI_NET_OBJ_INSTANCE, &conv1d_8_layer, AI_STATIC,
  .tensors = &conv1d_7_chain, 
  .groups = 1, 
  .nl_func = nl_func_tanh_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 2), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv1d_8_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_7_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_8_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv1d_8_weights, &conv1d_8_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv1d_8_layer, 8,
  CONV2D_TYPE,
  conv2d, forward_conv2d,
  &AI_NET_OBJ_INSTANCE, &conv1d_9_layer, AI_STATIC,
  .tensors = &conv1d_8_chain, 
  .groups = 1, 
  .nl_func = nl_func_tanh_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 4), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv1d_9_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_8_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_9_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv1d_9_weights, &conv1d_9_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv1d_9_layer, 9,
  CONV2D_TYPE,
  conv2d, forward_conv2d,
  &AI_NET_OBJ_INSTANCE, &conv1d_10_layer, AI_STATIC,
  .tensors = &conv1d_9_chain, 
  .groups = 1, 
  .nl_func = nl_func_tanh_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 8), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv1d_10_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_9_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_10_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv1d_10_weights, &conv1d_10_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv1d_10_layer, 10,
  CONV2D_TYPE,
  conv2d, forward_conv2d,
  &AI_NET_OBJ_INSTANCE, &conv1d_11_layer, AI_STATIC,
  .tensors = &conv1d_10_chain, 
  .groups = 1, 
  .nl_func = nl_func_tanh_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 16), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv1d_11_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_10_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_11_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv1d_11_weights, &conv1d_11_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv1d_11_layer, 11,
  CONV2D_TYPE,
  conv2d, forward_conv2d,
  &AI_NET_OBJ_INSTANCE, &conv1d_11_layer, AI_STATIC,
  .tensors = &conv1d_11_chain, 
  .groups = 1, 
  .nl_func = nl_func_tanh_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 32), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_OBJ_INIT(AI_BUFFER_FORMAT_U8,
                     1, 1, 8228, 1,
                     NULL),
  AI_BUFFER_OBJ_INIT(AI_BUFFER_FORMAT_U8,
                     1, 1, 8416, 1,
                     NULL),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_WN12_IN_NUM, &input_0_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_WN12_OUT_NUM, &conv1d_11_output),
  &conv1d_layer, 0, NULL)



AI_DECLARE_STATIC
ai_bool wn12_configure_activations(
  ai_network* net_ctx, const ai_buffer* activation_buffer)
{
  AI_ASSERT(net_ctx &&  activation_buffer && activation_buffer->data)

  ai_ptr activations = AI_PTR(AI_PTR_ALIGN(activation_buffer->data, AI_WN12_ACTIVATIONS_ALIGNMENT));
  AI_ASSERT(activations)
  AI_UNUSED(net_ctx)

  {
    /* Updating activations (byte) offsets */
    input_0_output_array.data = AI_PTR(activations + 7404);
    input_0_output_array.data_start = AI_PTR(activations + 7404);
    conv1d_output_array.data = AI_PTR(activations + 320);
    conv1d_output_array.data_start = AI_PTR(activations + 320);
    conv1d_1_output_array.data = AI_PTR(activations + 256);
    conv1d_1_output_array.data_start = AI_PTR(activations + 256);
    conv1d_2_output_array.data = AI_PTR(activations + 192);
    conv1d_2_output_array.data_start = AI_PTR(activations + 192);
    conv1d_3_output_array.data = AI_PTR(activations + 128);
    conv1d_3_output_array.data_start = AI_PTR(activations + 128);
    conv1d_4_output_array.data = AI_PTR(activations + 64);
    conv1d_4_output_array.data_start = AI_PTR(activations + 64);
    conv1d_5_output_array.data = AI_PTR(activations + 0);
    conv1d_5_output_array.data_start = AI_PTR(activations + 0);
    conv1d_6_output_array.data = AI_PTR(activations + 4064);
    conv1d_6_output_array.data_start = AI_PTR(activations + 4064);
    conv1d_7_output_array.data = AI_PTR(activations + 0);
    conv1d_7_output_array.data_start = AI_PTR(activations + 0);
    conv1d_8_output_array.data = AI_PTR(activations + 3872);
    conv1d_8_output_array.data_start = AI_PTR(activations + 3872);
    conv1d_9_output_array.data = AI_PTR(activations + 0);
    conv1d_9_output_array.data_start = AI_PTR(activations + 0);
    conv1d_10_output_array.data = AI_PTR(activations + 3104);
    conv1d_10_output_array.data_start = AI_PTR(activations + 3104);
    conv1d_11_output_array.data = AI_PTR(activations + 0);
    conv1d_11_output_array.data_start = AI_PTR(activations + 0);
    
  }
  return true;
}



AI_DECLARE_STATIC
ai_bool wn12_configure_weights(
  ai_network* net_ctx, const ai_buffer* weights_buffer)
{
  AI_ASSERT(net_ctx &&  weights_buffer && weights_buffer->data)

  ai_ptr weights = AI_PTR(weights_buffer->data);
  AI_ASSERT(weights)
  AI_UNUSED(net_ctx)

  {
    /* Updating weights (byte) offsets */
    
    conv1d_11_bias_array.format |= AI_FMT_FLAG_CONST;
    conv1d_11_bias_array.data = AI_PTR(weights + 8224);
    conv1d_11_bias_array.data_start = AI_PTR(weights + 8224);
    conv1d_11_weights_array.format |= AI_FMT_FLAG_CONST;
    conv1d_11_weights_array.data = AI_PTR(weights + 8128);
    conv1d_11_weights_array.data_start = AI_PTR(weights + 8128);
    conv1d_10_bias_array.format |= AI_FMT_FLAG_CONST;
    conv1d_10_bias_array.data = AI_PTR(weights + 8096);
    conv1d_10_bias_array.data_start = AI_PTR(weights + 8096);
    conv1d_10_weights_array.format |= AI_FMT_FLAG_CONST;
    conv1d_10_weights_array.data = AI_PTR(weights + 7328);
    conv1d_10_weights_array.data_start = AI_PTR(weights + 7328);
    conv1d_9_bias_array.format |= AI_FMT_FLAG_CONST;
    conv1d_9_bias_array.data = AI_PTR(weights + 7296);
    conv1d_9_bias_array.data_start = AI_PTR(weights + 7296);
    conv1d_9_weights_array.format |= AI_FMT_FLAG_CONST;
    conv1d_9_weights_array.data = AI_PTR(weights + 6528);
    conv1d_9_weights_array.data_start = AI_PTR(weights + 6528);
    conv1d_8_bias_array.format |= AI_FMT_FLAG_CONST;
    conv1d_8_bias_array.data = AI_PTR(weights + 6496);
    conv1d_8_bias_array.data_start = AI_PTR(weights + 6496);
    conv1d_8_weights_array.format |= AI_FMT_FLAG_CONST;
    conv1d_8_weights_array.data = AI_PTR(weights + 5728);
    conv1d_8_weights_array.data_start = AI_PTR(weights + 5728);
    conv1d_7_bias_array.format |= AI_FMT_FLAG_CONST;
    conv1d_7_bias_array.data = AI_PTR(weights + 5696);
    conv1d_7_bias_array.data_start = AI_PTR(weights + 5696);
    conv1d_7_weights_array.format |= AI_FMT_FLAG_CONST;
    conv1d_7_weights_array.data = AI_PTR(weights + 4928);
    conv1d_7_weights_array.data_start = AI_PTR(weights + 4928);
    conv1d_6_bias_array.format |= AI_FMT_FLAG_CONST;
    conv1d_6_bias_array.data = AI_PTR(weights + 4896);
    conv1d_6_bias_array.data_start = AI_PTR(weights + 4896);
    conv1d_6_weights_array.format |= AI_FMT_FLAG_CONST;
    conv1d_6_weights_array.data = AI_PTR(weights + 4128);
    conv1d_6_weights_array.data_start = AI_PTR(weights + 4128);
    conv1d_5_bias_array.format |= AI_FMT_FLAG_CONST;
    conv1d_5_bias_array.data = AI_PTR(weights + 4096);
    conv1d_5_bias_array.data_start = AI_PTR(weights + 4096);
    conv1d_5_weights_array.format |= AI_FMT_FLAG_CONST;
    conv1d_5_weights_array.data = AI_PTR(weights + 3328);
    conv1d_5_weights_array.data_start = AI_PTR(weights + 3328);
    conv1d_4_bias_array.format |= AI_FMT_FLAG_CONST;
    conv1d_4_bias_array.data = AI_PTR(weights + 3296);
    conv1d_4_bias_array.data_start = AI_PTR(weights + 3296);
    conv1d_4_weights_array.format |= AI_FMT_FLAG_CONST;
    conv1d_4_weights_array.data = AI_PTR(weights + 2528);
    conv1d_4_weights_array.data_start = AI_PTR(weights + 2528);
    conv1d_3_bias_array.format |= AI_FMT_FLAG_CONST;
    conv1d_3_bias_array.data = AI_PTR(weights + 2496);
    conv1d_3_bias_array.data_start = AI_PTR(weights + 2496);
    conv1d_3_weights_array.format |= AI_FMT_FLAG_CONST;
    conv1d_3_weights_array.data = AI_PTR(weights + 1728);
    conv1d_3_weights_array.data_start = AI_PTR(weights + 1728);
    conv1d_2_bias_array.format |= AI_FMT_FLAG_CONST;
    conv1d_2_bias_array.data = AI_PTR(weights + 1696);
    conv1d_2_bias_array.data_start = AI_PTR(weights + 1696);
    conv1d_2_weights_array.format |= AI_FMT_FLAG_CONST;
    conv1d_2_weights_array.data = AI_PTR(weights + 928);
    conv1d_2_weights_array.data_start = AI_PTR(weights + 928);
    conv1d_1_bias_array.format |= AI_FMT_FLAG_CONST;
    conv1d_1_bias_array.data = AI_PTR(weights + 896);
    conv1d_1_bias_array.data_start = AI_PTR(weights + 896);
    conv1d_1_weights_array.format |= AI_FMT_FLAG_CONST;
    conv1d_1_weights_array.data = AI_PTR(weights + 128);
    conv1d_1_weights_array.data_start = AI_PTR(weights + 128);
    conv1d_bias_array.format |= AI_FMT_FLAG_CONST;
    conv1d_bias_array.data = AI_PTR(weights + 96);
    conv1d_bias_array.data_start = AI_PTR(weights + 96);
    conv1d_weights_array.format |= AI_FMT_FLAG_CONST;
    conv1d_weights_array.data = AI_PTR(weights + 0);
    conv1d_weights_array.data_start = AI_PTR(weights + 0);
  }

  return true;
}


/**  PUBLIC APIs SECTION  *****************************************************/

AI_API_ENTRY
ai_bool ai_wn12_get_info(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if ( report && net_ctx )
  {
    ai_network_report r = {
      .model_name        = AI_WN12_MODEL_NAME,
      .model_signature   = AI_WN12_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = {AI_TOOLS_API_VERSION_MAJOR, AI_TOOLS_API_VERSION_MINOR,
                            AI_TOOLS_API_VERSION_MICRO, 0x0},

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 447283,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .activations       = AI_STRUCT_INIT,
      .params            = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x0,
    };

    if ( !ai_platform_api_get_network_report(network, &r) ) return false;

    *report = r;
    return true;
  }

  return false;
}

AI_API_ENTRY
ai_error ai_wn12_get_error(ai_handle network)
{
  return ai_platform_network_get_error(network);
}

AI_API_ENTRY
ai_error ai_wn12_create(
  ai_handle* network, const ai_buffer* network_config)
{
  return ai_platform_network_create(
    network, network_config, 
    &AI_NET_OBJ_INSTANCE,
    AI_TOOLS_API_VERSION_MAJOR, AI_TOOLS_API_VERSION_MINOR, AI_TOOLS_API_VERSION_MICRO);
}

AI_API_ENTRY
ai_handle ai_wn12_destroy(ai_handle network)
{
  return ai_platform_network_destroy(network);
}

AI_API_ENTRY
ai_bool ai_wn12_init(
  ai_handle network, const ai_network_params* params)
{
  ai_network* net_ctx = ai_platform_network_init(network, params);
  if ( !net_ctx ) return false;

  ai_bool ok = true;
  ok &= wn12_configure_weights(net_ctx, &params->params);
  ok &= wn12_configure_activations(net_ctx, &params->activations);

  ok &= ai_platform_network_post_init(network);

  return ok;
}


AI_API_ENTRY
ai_i32 ai_wn12_run(
  ai_handle network, const ai_buffer* input, ai_buffer* output)
{
  return ai_platform_network_process(network, input, output);
}

AI_API_ENTRY
ai_i32 ai_wn12_forward(ai_handle network, const ai_buffer* input)
{
  return ai_platform_network_process(network, input, NULL);
}




#undef AI_WN12_MODEL_SIGNATURE
#undef AI_NET_OBJ_INSTANCE
#undef AI_TOOLS_VERSION_MAJOR
#undef AI_TOOLS_VERSION_MINOR
#undef AI_TOOLS_VERSION_MICRO
#undef AI_TOOLS_API_VERSION_MAJOR
#undef AI_TOOLS_API_VERSION_MINOR
#undef AI_TOOLS_API_VERSION_MICRO
#undef AI_TOOLS_DATE_TIME
#undef AI_TOOLS_COMPILE_TIME

