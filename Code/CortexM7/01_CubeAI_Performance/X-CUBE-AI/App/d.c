/**
  ******************************************************************************
  * @file    d.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Sat Dec 12 18:23:16 2020
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


#include "d.h"

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
#define AI_NET_OBJ_INSTANCE g_d
 
#undef AI_D_MODEL_SIGNATURE
#define AI_D_MODEL_SIGNATURE     "7aa7056a5f0d581cf1f1b2e01c496130"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     "(rev-5.2.0)"
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "Sat Dec 12 18:23:16 2020"

#undef AI_TOOLS_COMPILE_TIME
#define AI_TOOLS_COMPILE_TIME    __DATE__ " " __TIME__

#undef AI_D_N_BATCHES
#define AI_D_N_BATCHES         (1)

/**  Forward network declaration section  *************************************/
AI_STATIC ai_network AI_NET_OBJ_INSTANCE;


/**  Forward network array declarations  **************************************/
AI_STATIC ai_array conv1d_25_bias_array;   /* Array #0 */
AI_STATIC ai_array conv1d_25_weights_array;   /* Array #1 */
AI_STATIC ai_array conv1d_24_bias_array;   /* Array #2 */
AI_STATIC ai_array conv1d_24_weights_array;   /* Array #3 */
AI_STATIC ai_array conv1d_23_bias_array;   /* Array #4 */
AI_STATIC ai_array conv1d_23_weights_array;   /* Array #5 */
AI_STATIC ai_array conv1d_22_bias_array;   /* Array #6 */
AI_STATIC ai_array conv1d_22_weights_array;   /* Array #7 */
AI_STATIC ai_array conv1d_21_bias_array;   /* Array #8 */
AI_STATIC ai_array conv1d_21_weights_array;   /* Array #9 */
AI_STATIC ai_array conv1d_20_bias_array;   /* Array #10 */
AI_STATIC ai_array conv1d_20_weights_array;   /* Array #11 */
AI_STATIC ai_array conv1d_19_bias_array;   /* Array #12 */
AI_STATIC ai_array conv1d_19_weights_array;   /* Array #13 */
AI_STATIC ai_array conv1d_18_bias_array;   /* Array #14 */
AI_STATIC ai_array conv1d_18_weights_array;   /* Array #15 */
AI_STATIC ai_array conv1d_17_bias_array;   /* Array #16 */
AI_STATIC ai_array conv1d_17_weights_array;   /* Array #17 */
AI_STATIC ai_array conv1d_16_bias_array;   /* Array #18 */
AI_STATIC ai_array conv1d_16_weights_array;   /* Array #19 */
AI_STATIC ai_array conv1d_15_bias_array;   /* Array #20 */
AI_STATIC ai_array conv1d_15_weights_array;   /* Array #21 */
AI_STATIC ai_array conv1d_14_bias_array;   /* Array #22 */
AI_STATIC ai_array conv1d_14_weights_array;   /* Array #23 */
AI_STATIC ai_array input_0_output_array;   /* Array #24 */
AI_STATIC ai_array conv1d_14_output_array;   /* Array #25 */
AI_STATIC ai_array conv1d_15_output_array;   /* Array #26 */
AI_STATIC ai_array conv1d_16_output_array;   /* Array #27 */
AI_STATIC ai_array conv1d_17_output_array;   /* Array #28 */
AI_STATIC ai_array conv1d_18_output_array;   /* Array #29 */
AI_STATIC ai_array conv1d_19_output_array;   /* Array #30 */
AI_STATIC ai_array conv1d_20_output_array;   /* Array #31 */
AI_STATIC ai_array conv1d_21_output_array;   /* Array #32 */
AI_STATIC ai_array conv1d_22_output_array;   /* Array #33 */
AI_STATIC ai_array conv1d_23_output_array;   /* Array #34 */
AI_STATIC ai_array conv1d_24_output_array;   /* Array #35 */
AI_STATIC ai_array conv1d_25_output_array;   /* Array #36 */


/**  Forward network tensor declarations  *************************************/
AI_STATIC ai_tensor conv1d_25_bias;   /* Tensor #0 */
AI_STATIC ai_tensor conv1d_25_weights;   /* Tensor #1 */
AI_STATIC ai_tensor conv1d_24_bias;   /* Tensor #2 */
AI_STATIC ai_tensor conv1d_24_weights;   /* Tensor #3 */
AI_STATIC ai_tensor conv1d_23_bias;   /* Tensor #4 */
AI_STATIC ai_tensor conv1d_23_weights;   /* Tensor #5 */
AI_STATIC ai_tensor conv1d_22_bias;   /* Tensor #6 */
AI_STATIC ai_tensor conv1d_22_weights;   /* Tensor #7 */
AI_STATIC ai_tensor conv1d_21_bias;   /* Tensor #8 */
AI_STATIC ai_tensor conv1d_21_weights;   /* Tensor #9 */
AI_STATIC ai_tensor conv1d_20_bias;   /* Tensor #10 */
AI_STATIC ai_tensor conv1d_20_weights;   /* Tensor #11 */
AI_STATIC ai_tensor conv1d_19_bias;   /* Tensor #12 */
AI_STATIC ai_tensor conv1d_19_weights;   /* Tensor #13 */
AI_STATIC ai_tensor conv1d_18_bias;   /* Tensor #14 */
AI_STATIC ai_tensor conv1d_18_weights;   /* Tensor #15 */
AI_STATIC ai_tensor conv1d_17_bias;   /* Tensor #16 */
AI_STATIC ai_tensor conv1d_17_weights;   /* Tensor #17 */
AI_STATIC ai_tensor conv1d_16_bias;   /* Tensor #18 */
AI_STATIC ai_tensor conv1d_16_weights;   /* Tensor #19 */
AI_STATIC ai_tensor conv1d_15_bias;   /* Tensor #20 */
AI_STATIC ai_tensor conv1d_15_weights;   /* Tensor #21 */
AI_STATIC ai_tensor conv1d_14_bias;   /* Tensor #22 */
AI_STATIC ai_tensor conv1d_14_weights;   /* Tensor #23 */
AI_STATIC ai_tensor input_0_output;   /* Tensor #24 */
AI_STATIC ai_tensor conv1d_14_output;   /* Tensor #25 */
AI_STATIC ai_tensor conv1d_15_output;   /* Tensor #26 */
AI_STATIC ai_tensor conv1d_16_output;   /* Tensor #27 */
AI_STATIC ai_tensor conv1d_17_output;   /* Tensor #28 */
AI_STATIC ai_tensor conv1d_18_output;   /* Tensor #29 */
AI_STATIC ai_tensor conv1d_19_output;   /* Tensor #30 */
AI_STATIC ai_tensor conv1d_20_output;   /* Tensor #31 */
AI_STATIC ai_tensor conv1d_21_output;   /* Tensor #32 */
AI_STATIC ai_tensor conv1d_22_output;   /* Tensor #33 */
AI_STATIC ai_tensor conv1d_23_output;   /* Tensor #34 */
AI_STATIC ai_tensor conv1d_24_output;   /* Tensor #35 */
AI_STATIC ai_tensor conv1d_25_output;   /* Tensor #36 */


/**  Forward network tensor chain declarations  *******************************/
AI_STATIC_CONST ai_tensor_chain conv1d_14_chain;   /* Chain #0 */
AI_STATIC_CONST ai_tensor_chain conv1d_15_chain;   /* Chain #1 */
AI_STATIC_CONST ai_tensor_chain conv1d_16_chain;   /* Chain #2 */
AI_STATIC_CONST ai_tensor_chain conv1d_17_chain;   /* Chain #3 */
AI_STATIC_CONST ai_tensor_chain conv1d_18_chain;   /* Chain #4 */
AI_STATIC_CONST ai_tensor_chain conv1d_19_chain;   /* Chain #5 */
AI_STATIC_CONST ai_tensor_chain conv1d_20_chain;   /* Chain #6 */
AI_STATIC_CONST ai_tensor_chain conv1d_21_chain;   /* Chain #7 */
AI_STATIC_CONST ai_tensor_chain conv1d_22_chain;   /* Chain #8 */
AI_STATIC_CONST ai_tensor_chain conv1d_23_chain;   /* Chain #9 */
AI_STATIC_CONST ai_tensor_chain conv1d_24_chain;   /* Chain #10 */
AI_STATIC_CONST ai_tensor_chain conv1d_25_chain;   /* Chain #11 */


/**  Forward network layer declarations  **************************************/
AI_STATIC ai_layer_conv2d conv1d_14_layer; /* Layer #0 */
AI_STATIC ai_layer_conv2d conv1d_15_layer; /* Layer #1 */
AI_STATIC ai_layer_conv2d conv1d_16_layer; /* Layer #2 */
AI_STATIC ai_layer_conv2d conv1d_17_layer; /* Layer #3 */
AI_STATIC ai_layer_conv2d conv1d_18_layer; /* Layer #4 */
AI_STATIC ai_layer_conv2d conv1d_19_layer; /* Layer #5 */
AI_STATIC ai_layer_conv2d conv1d_20_layer; /* Layer #6 */
AI_STATIC ai_layer_conv2d conv1d_21_layer; /* Layer #7 */
AI_STATIC ai_layer_conv2d conv1d_22_layer; /* Layer #8 */
AI_STATIC ai_layer_conv2d conv1d_23_layer; /* Layer #9 */
AI_STATIC ai_layer_conv2d conv1d_24_layer; /* Layer #10 */
AI_STATIC ai_layer_conv2d conv1d_25_layer; /* Layer #11 */


/**  Array declarations section  **********************************************/
/* Array#0 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_25_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)

/* Array#1 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_25_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 12, AI_STATIC)

/* Array#2 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_24_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4, AI_STATIC)

/* Array#3 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_24_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 48, AI_STATIC)

/* Array#4 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_23_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4, AI_STATIC)

/* Array#5 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_23_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 48, AI_STATIC)

/* Array#6 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_22_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4, AI_STATIC)

/* Array#7 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_22_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 48, AI_STATIC)

/* Array#8 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_21_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4, AI_STATIC)

/* Array#9 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_21_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 48, AI_STATIC)

/* Array#10 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_20_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4, AI_STATIC)

/* Array#11 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_20_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 48, AI_STATIC)

/* Array#12 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_19_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4, AI_STATIC)

/* Array#13 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_19_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 48, AI_STATIC)

/* Array#14 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_18_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4, AI_STATIC)

/* Array#15 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_18_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 48, AI_STATIC)

/* Array#16 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_17_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4, AI_STATIC)

/* Array#17 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_17_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 48, AI_STATIC)

/* Array#18 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_16_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4, AI_STATIC)

/* Array#19 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_16_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 48, AI_STATIC)

/* Array#20 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_15_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4, AI_STATIC)

/* Array#21 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_15_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 48, AI_STATIC)

/* Array#22 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_14_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4, AI_STATIC)

/* Array#23 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_14_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 12, AI_STATIC)

/* Array#24 */
AI_ARRAY_OBJ_DECLARE(
  input_0_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 253, AI_STATIC)

/* Array#25 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_14_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1004, AI_STATIC)

/* Array#26 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_15_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 988, AI_STATIC)

/* Array#27 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_16_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 956, AI_STATIC)

/* Array#28 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_17_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 892, AI_STATIC)

/* Array#29 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_18_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 764, AI_STATIC)

/* Array#30 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_19_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 508, AI_STATIC)

/* Array#31 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_20_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 500, AI_STATIC)

/* Array#32 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_21_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 484, AI_STATIC)

/* Array#33 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_22_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 452, AI_STATIC)

/* Array#34 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_23_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 388, AI_STATIC)

/* Array#35 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_24_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 260, AI_STATIC)

/* Array#36 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_25_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 1, AI_STATIC)

/**  Tensor declarations section  *********************************************/
/* Tensor #0 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_25_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &conv1d_25_bias_array, NULL)

/* Tensor #1 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_25_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 4, 1, 3, 1), AI_STRIDE_INIT(4, 4, 16, 16, 48),
  1, &conv1d_25_weights_array, NULL)

/* Tensor #2 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_24_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv1d_24_bias_array, NULL)

/* Tensor #3 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_24_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 4, 1, 3, 4), AI_STRIDE_INIT(4, 4, 16, 16, 48),
  1, &conv1d_24_weights_array, NULL)

/* Tensor #4 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_23_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv1d_23_bias_array, NULL)

/* Tensor #5 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_23_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 4, 1, 3, 4), AI_STRIDE_INIT(4, 4, 16, 16, 48),
  1, &conv1d_23_weights_array, NULL)

/* Tensor #6 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_22_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv1d_22_bias_array, NULL)

/* Tensor #7 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_22_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 4, 1, 3, 4), AI_STRIDE_INIT(4, 4, 16, 16, 48),
  1, &conv1d_22_weights_array, NULL)

/* Tensor #8 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_21_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv1d_21_bias_array, NULL)

/* Tensor #9 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_21_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 4, 1, 3, 4), AI_STRIDE_INIT(4, 4, 16, 16, 48),
  1, &conv1d_21_weights_array, NULL)

/* Tensor #10 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_20_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv1d_20_bias_array, NULL)

/* Tensor #11 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_20_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 4, 1, 3, 4), AI_STRIDE_INIT(4, 4, 16, 16, 48),
  1, &conv1d_20_weights_array, NULL)

/* Tensor #12 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_19_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv1d_19_bias_array, NULL)

/* Tensor #13 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_19_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 4, 1, 3, 4), AI_STRIDE_INIT(4, 4, 16, 16, 48),
  1, &conv1d_19_weights_array, NULL)

/* Tensor #14 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_18_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv1d_18_bias_array, NULL)

/* Tensor #15 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_18_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 4, 1, 3, 4), AI_STRIDE_INIT(4, 4, 16, 16, 48),
  1, &conv1d_18_weights_array, NULL)

/* Tensor #16 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_17_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv1d_17_bias_array, NULL)

/* Tensor #17 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_17_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 4, 1, 3, 4), AI_STRIDE_INIT(4, 4, 16, 16, 48),
  1, &conv1d_17_weights_array, NULL)

/* Tensor #18 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_16_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv1d_16_bias_array, NULL)

/* Tensor #19 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_16_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 4, 1, 3, 4), AI_STRIDE_INIT(4, 4, 16, 16, 48),
  1, &conv1d_16_weights_array, NULL)

/* Tensor #20 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_15_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv1d_15_bias_array, NULL)

/* Tensor #21 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_15_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 4, 1, 3, 4), AI_STRIDE_INIT(4, 4, 16, 16, 48),
  1, &conv1d_15_weights_array, NULL)

/* Tensor #22 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_14_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv1d_14_bias_array, NULL)

/* Tensor #23 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_14_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 3, 4), AI_STRIDE_INIT(4, 4, 4, 4, 12),
  1, &conv1d_14_weights_array, NULL)

/* Tensor #24 */
AI_TENSOR_OBJ_DECLARE(
  input_0_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 253), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &input_0_output_array, NULL)

/* Tensor #25 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_14_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 251), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv1d_14_output_array, NULL)

/* Tensor #26 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_15_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 247), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv1d_15_output_array, NULL)

/* Tensor #27 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_16_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 239), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv1d_16_output_array, NULL)

/* Tensor #28 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_17_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 223), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv1d_17_output_array, NULL)

/* Tensor #29 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_18_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 191), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv1d_18_output_array, NULL)

/* Tensor #30 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_19_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 127), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv1d_19_output_array, NULL)

/* Tensor #31 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_20_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 125), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv1d_20_output_array, NULL)

/* Tensor #32 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_21_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 121), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv1d_21_output_array, NULL)

/* Tensor #33 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_22_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 113), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv1d_22_output_array, NULL)

/* Tensor #34 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_23_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 97), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv1d_23_output_array, NULL)

/* Tensor #35 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_24_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 65), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv1d_24_output_array, NULL)

/* Tensor #36 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_25_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &conv1d_25_output_array, NULL)



/**  Layer declarations section  **********************************************/


AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv1d_14_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &input_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_14_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv1d_14_weights, &conv1d_14_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv1d_14_layer, 0,
  CONV2D_TYPE,
  conv2d, forward_conv2d,
  &AI_NET_OBJ_INSTANCE, &conv1d_15_layer, AI_STATIC,
  .tensors = &conv1d_14_chain, 
  .groups = 1, 
  .nl_func = nl_func_tanh_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv1d_15_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_14_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_15_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv1d_15_weights, &conv1d_15_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv1d_15_layer, 1,
  CONV2D_TYPE,
  conv2d, forward_conv2d,
  &AI_NET_OBJ_INSTANCE, &conv1d_16_layer, AI_STATIC,
  .tensors = &conv1d_15_chain, 
  .groups = 1, 
  .nl_func = nl_func_tanh_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 2), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv1d_16_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_15_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_16_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv1d_16_weights, &conv1d_16_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv1d_16_layer, 2,
  CONV2D_TYPE,
  conv2d, forward_conv2d,
  &AI_NET_OBJ_INSTANCE, &conv1d_17_layer, AI_STATIC,
  .tensors = &conv1d_16_chain, 
  .groups = 1, 
  .nl_func = nl_func_tanh_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 4), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv1d_17_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_16_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_17_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv1d_17_weights, &conv1d_17_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv1d_17_layer, 3,
  CONV2D_TYPE,
  conv2d, forward_conv2d,
  &AI_NET_OBJ_INSTANCE, &conv1d_18_layer, AI_STATIC,
  .tensors = &conv1d_17_chain, 
  .groups = 1, 
  .nl_func = nl_func_tanh_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 8), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv1d_18_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_17_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_18_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv1d_18_weights, &conv1d_18_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv1d_18_layer, 4,
  CONV2D_TYPE,
  conv2d, forward_conv2d,
  &AI_NET_OBJ_INSTANCE, &conv1d_19_layer, AI_STATIC,
  .tensors = &conv1d_18_chain, 
  .groups = 1, 
  .nl_func = nl_func_tanh_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 16), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv1d_19_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_18_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_19_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv1d_19_weights, &conv1d_19_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv1d_19_layer, 5,
  CONV2D_TYPE,
  conv2d, forward_conv2d,
  &AI_NET_OBJ_INSTANCE, &conv1d_20_layer, AI_STATIC,
  .tensors = &conv1d_19_chain, 
  .groups = 1, 
  .nl_func = nl_func_tanh_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 32), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv1d_20_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_19_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_20_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv1d_20_weights, &conv1d_20_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv1d_20_layer, 6,
  CONV2D_TYPE,
  conv2d, forward_conv2d,
  &AI_NET_OBJ_INSTANCE, &conv1d_21_layer, AI_STATIC,
  .tensors = &conv1d_20_chain, 
  .groups = 1, 
  .nl_func = nl_func_tanh_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv1d_21_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_20_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_21_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv1d_21_weights, &conv1d_21_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv1d_21_layer, 7,
  CONV2D_TYPE,
  conv2d, forward_conv2d,
  &AI_NET_OBJ_INSTANCE, &conv1d_22_layer, AI_STATIC,
  .tensors = &conv1d_21_chain, 
  .groups = 1, 
  .nl_func = nl_func_tanh_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 2), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv1d_22_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_21_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_22_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv1d_22_weights, &conv1d_22_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv1d_22_layer, 8,
  CONV2D_TYPE,
  conv2d, forward_conv2d,
  &AI_NET_OBJ_INSTANCE, &conv1d_23_layer, AI_STATIC,
  .tensors = &conv1d_22_chain, 
  .groups = 1, 
  .nl_func = nl_func_tanh_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 4), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv1d_23_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_22_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_23_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv1d_23_weights, &conv1d_23_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv1d_23_layer, 9,
  CONV2D_TYPE,
  conv2d, forward_conv2d,
  &AI_NET_OBJ_INSTANCE, &conv1d_24_layer, AI_STATIC,
  .tensors = &conv1d_23_chain, 
  .groups = 1, 
  .nl_func = nl_func_tanh_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 8), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv1d_24_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_23_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_24_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv1d_24_weights, &conv1d_24_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv1d_24_layer, 10,
  CONV2D_TYPE,
  conv2d, forward_conv2d,
  &AI_NET_OBJ_INSTANCE, &conv1d_25_layer, AI_STATIC,
  .tensors = &conv1d_24_chain, 
  .groups = 1, 
  .nl_func = nl_func_tanh_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 16), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv1d_25_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_24_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_25_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv1d_25_weights, &conv1d_25_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv1d_25_layer, 11,
  CONV2D_TYPE,
  conv2d, forward_conv2d,
  &AI_NET_OBJ_INSTANCE, &conv1d_25_layer, AI_STATIC,
  .tensors = &conv1d_25_chain, 
  .groups = 1, 
  .nl_func = nl_func_tanh_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 32), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_OBJ_INIT(AI_BUFFER_FORMAT_U8,
                     1, 1, 2196, 1,
                     NULL),
  AI_BUFFER_OBJ_INIT(AI_BUFFER_FORMAT_U8,
                     1, 1, 4176, 1,
                     NULL),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_D_IN_NUM, &input_0_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_D_OUT_NUM, &conv1d_25_output),
  &conv1d_14_layer, 0, NULL)



AI_DECLARE_STATIC
ai_bool d_configure_activations(
  ai_network* net_ctx, const ai_buffer* activation_buffer)
{
  AI_ASSERT(net_ctx &&  activation_buffer && activation_buffer->data)

  ai_ptr activations = AI_PTR(AI_PTR_ALIGN(activation_buffer->data, AI_D_ACTIVATIONS_ALIGNMENT));
  AI_ASSERT(activations)
  AI_UNUSED(net_ctx)

  {
    /* Updating activations (byte) offsets */
    input_0_output_array.data = AI_PTR(NULL);
    input_0_output_array.data_start = AI_PTR(NULL);
    conv1d_14_output_array.data = AI_PTR(activations + 160);
    conv1d_14_output_array.data_start = AI_PTR(activations + 160);
    conv1d_15_output_array.data = AI_PTR(activations + 128);
    conv1d_15_output_array.data_start = AI_PTR(activations + 128);
    conv1d_16_output_array.data = AI_PTR(activations + 96);
    conv1d_16_output_array.data_start = AI_PTR(activations + 96);
    conv1d_17_output_array.data = AI_PTR(activations + 64);
    conv1d_17_output_array.data_start = AI_PTR(activations + 64);
    conv1d_18_output_array.data = AI_PTR(activations + 32);
    conv1d_18_output_array.data_start = AI_PTR(activations + 32);
    conv1d_19_output_array.data = AI_PTR(activations + 0);
    conv1d_19_output_array.data_start = AI_PTR(activations + 0);
    conv1d_20_output_array.data = AI_PTR(activations + 2032);
    conv1d_20_output_array.data_start = AI_PTR(activations + 2032);
    conv1d_21_output_array.data = AI_PTR(activations + 0);
    conv1d_21_output_array.data_start = AI_PTR(activations + 0);
    conv1d_22_output_array.data = AI_PTR(activations + 1936);
    conv1d_22_output_array.data_start = AI_PTR(activations + 1936);
    conv1d_23_output_array.data = AI_PTR(activations + 0);
    conv1d_23_output_array.data_start = AI_PTR(activations + 0);
    conv1d_24_output_array.data = AI_PTR(activations + 1552);
    conv1d_24_output_array.data_start = AI_PTR(activations + 1552);
    conv1d_25_output_array.data = AI_PTR(NULL);
    conv1d_25_output_array.data_start = AI_PTR(NULL);
    
  }
  return true;
}



AI_DECLARE_STATIC
ai_bool d_configure_weights(
  ai_network* net_ctx, const ai_buffer* weights_buffer)
{
  AI_ASSERT(net_ctx &&  weights_buffer && weights_buffer->data)

  ai_ptr weights = AI_PTR(weights_buffer->data);
  AI_ASSERT(weights)
  AI_UNUSED(net_ctx)

  {
    /* Updating weights (byte) offsets */
    
    conv1d_25_bias_array.format |= AI_FMT_FLAG_CONST;
    conv1d_25_bias_array.data = AI_PTR(weights + 2192);
    conv1d_25_bias_array.data_start = AI_PTR(weights + 2192);
    conv1d_25_weights_array.format |= AI_FMT_FLAG_CONST;
    conv1d_25_weights_array.data = AI_PTR(weights + 2144);
    conv1d_25_weights_array.data_start = AI_PTR(weights + 2144);
    conv1d_24_bias_array.format |= AI_FMT_FLAG_CONST;
    conv1d_24_bias_array.data = AI_PTR(weights + 2128);
    conv1d_24_bias_array.data_start = AI_PTR(weights + 2128);
    conv1d_24_weights_array.format |= AI_FMT_FLAG_CONST;
    conv1d_24_weights_array.data = AI_PTR(weights + 1936);
    conv1d_24_weights_array.data_start = AI_PTR(weights + 1936);
    conv1d_23_bias_array.format |= AI_FMT_FLAG_CONST;
    conv1d_23_bias_array.data = AI_PTR(weights + 1920);
    conv1d_23_bias_array.data_start = AI_PTR(weights + 1920);
    conv1d_23_weights_array.format |= AI_FMT_FLAG_CONST;
    conv1d_23_weights_array.data = AI_PTR(weights + 1728);
    conv1d_23_weights_array.data_start = AI_PTR(weights + 1728);
    conv1d_22_bias_array.format |= AI_FMT_FLAG_CONST;
    conv1d_22_bias_array.data = AI_PTR(weights + 1712);
    conv1d_22_bias_array.data_start = AI_PTR(weights + 1712);
    conv1d_22_weights_array.format |= AI_FMT_FLAG_CONST;
    conv1d_22_weights_array.data = AI_PTR(weights + 1520);
    conv1d_22_weights_array.data_start = AI_PTR(weights + 1520);
    conv1d_21_bias_array.format |= AI_FMT_FLAG_CONST;
    conv1d_21_bias_array.data = AI_PTR(weights + 1504);
    conv1d_21_bias_array.data_start = AI_PTR(weights + 1504);
    conv1d_21_weights_array.format |= AI_FMT_FLAG_CONST;
    conv1d_21_weights_array.data = AI_PTR(weights + 1312);
    conv1d_21_weights_array.data_start = AI_PTR(weights + 1312);
    conv1d_20_bias_array.format |= AI_FMT_FLAG_CONST;
    conv1d_20_bias_array.data = AI_PTR(weights + 1296);
    conv1d_20_bias_array.data_start = AI_PTR(weights + 1296);
    conv1d_20_weights_array.format |= AI_FMT_FLAG_CONST;
    conv1d_20_weights_array.data = AI_PTR(weights + 1104);
    conv1d_20_weights_array.data_start = AI_PTR(weights + 1104);
    conv1d_19_bias_array.format |= AI_FMT_FLAG_CONST;
    conv1d_19_bias_array.data = AI_PTR(weights + 1088);
    conv1d_19_bias_array.data_start = AI_PTR(weights + 1088);
    conv1d_19_weights_array.format |= AI_FMT_FLAG_CONST;
    conv1d_19_weights_array.data = AI_PTR(weights + 896);
    conv1d_19_weights_array.data_start = AI_PTR(weights + 896);
    conv1d_18_bias_array.format |= AI_FMT_FLAG_CONST;
    conv1d_18_bias_array.data = AI_PTR(weights + 880);
    conv1d_18_bias_array.data_start = AI_PTR(weights + 880);
    conv1d_18_weights_array.format |= AI_FMT_FLAG_CONST;
    conv1d_18_weights_array.data = AI_PTR(weights + 688);
    conv1d_18_weights_array.data_start = AI_PTR(weights + 688);
    conv1d_17_bias_array.format |= AI_FMT_FLAG_CONST;
    conv1d_17_bias_array.data = AI_PTR(weights + 672);
    conv1d_17_bias_array.data_start = AI_PTR(weights + 672);
    conv1d_17_weights_array.format |= AI_FMT_FLAG_CONST;
    conv1d_17_weights_array.data = AI_PTR(weights + 480);
    conv1d_17_weights_array.data_start = AI_PTR(weights + 480);
    conv1d_16_bias_array.format |= AI_FMT_FLAG_CONST;
    conv1d_16_bias_array.data = AI_PTR(weights + 464);
    conv1d_16_bias_array.data_start = AI_PTR(weights + 464);
    conv1d_16_weights_array.format |= AI_FMT_FLAG_CONST;
    conv1d_16_weights_array.data = AI_PTR(weights + 272);
    conv1d_16_weights_array.data_start = AI_PTR(weights + 272);
    conv1d_15_bias_array.format |= AI_FMT_FLAG_CONST;
    conv1d_15_bias_array.data = AI_PTR(weights + 256);
    conv1d_15_bias_array.data_start = AI_PTR(weights + 256);
    conv1d_15_weights_array.format |= AI_FMT_FLAG_CONST;
    conv1d_15_weights_array.data = AI_PTR(weights + 64);
    conv1d_15_weights_array.data_start = AI_PTR(weights + 64);
    conv1d_14_bias_array.format |= AI_FMT_FLAG_CONST;
    conv1d_14_bias_array.data = AI_PTR(weights + 48);
    conv1d_14_bias_array.data_start = AI_PTR(weights + 48);
    conv1d_14_weights_array.format |= AI_FMT_FLAG_CONST;
    conv1d_14_weights_array.data = AI_PTR(weights + 0);
    conv1d_14_weights_array.data_start = AI_PTR(weights + 0);
  }

  return true;
}


/**  PUBLIC APIs SECTION  *****************************************************/

AI_API_ENTRY
ai_bool ai_d_get_info(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if ( report && net_ctx )
  {
    ai_network_report r = {
      .model_name        = AI_D_MODEL_NAME,
      .model_signature   = AI_D_MODEL_SIGNATURE,
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
      
      .n_macc            = 149343,
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
ai_error ai_d_get_error(ai_handle network)
{
  return ai_platform_network_get_error(network);
}

AI_API_ENTRY
ai_error ai_d_create(
  ai_handle* network, const ai_buffer* network_config)
{
  return ai_platform_network_create(
    network, network_config, 
    &AI_NET_OBJ_INSTANCE,
    AI_TOOLS_API_VERSION_MAJOR, AI_TOOLS_API_VERSION_MINOR, AI_TOOLS_API_VERSION_MICRO);
}

AI_API_ENTRY
ai_handle ai_d_destroy(ai_handle network)
{
  return ai_platform_network_destroy(network);
}

AI_API_ENTRY
ai_bool ai_d_init(
  ai_handle network, const ai_network_params* params)
{
  ai_network* net_ctx = ai_platform_network_init(network, params);
  if ( !net_ctx ) return false;

  ai_bool ok = true;
  ok &= d_configure_weights(net_ctx, &params->params);
  ok &= d_configure_activations(net_ctx, &params->activations);

  ok &= ai_platform_network_post_init(network);

  return ok;
}


AI_API_ENTRY
ai_i32 ai_d_run(
  ai_handle network, const ai_buffer* input, ai_buffer* output)
{
  return ai_platform_network_process(network, input, output);
}

AI_API_ENTRY
ai_i32 ai_d_forward(ai_handle network, const ai_buffer* input)
{
  return ai_platform_network_process(network, input, NULL);
}




#undef AI_D_MODEL_SIGNATURE
#undef AI_NET_OBJ_INSTANCE
#undef AI_TOOLS_VERSION_MAJOR
#undef AI_TOOLS_VERSION_MINOR
#undef AI_TOOLS_VERSION_MICRO
#undef AI_TOOLS_API_VERSION_MAJOR
#undef AI_TOOLS_API_VERSION_MINOR
#undef AI_TOOLS_API_VERSION_MICRO
#undef AI_TOOLS_DATE_TIME
#undef AI_TOOLS_COMPILE_TIME

