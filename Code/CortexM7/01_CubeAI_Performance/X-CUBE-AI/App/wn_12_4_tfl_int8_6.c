/**
  ******************************************************************************
  * @file    wn_12_4_tfl_int8_6.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Thu Dec 10 18:06:34 2020
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


#include "wn_12_4_tfl_int8_6.h"

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
#define AI_NET_OBJ_INSTANCE g_wn_12_4_tfl_int8_6
 
#undef AI_WN_12_4_TFL_INT8_6_MODEL_SIGNATURE
#define AI_WN_12_4_TFL_INT8_6_MODEL_SIGNATURE     "a26ac6d9ce700a43afbaa900dbe29fbe"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     "(rev-5.2.0)"
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "Thu Dec 10 18:06:34 2020"

#undef AI_TOOLS_COMPILE_TIME
#define AI_TOOLS_COMPILE_TIME    __DATE__ " " __TIME__

#undef AI_WN_12_4_TFL_INT8_6_N_BATCHES
#define AI_WN_12_4_TFL_INT8_6_N_BATCHES         (1)

/**  Forward network declaration section  *************************************/
AI_STATIC ai_network AI_NET_OBJ_INSTANCE;


/**  Forward network array declarations  **************************************/
AI_STATIC ai_array conv2d_23_scratch1_array;   /* Array #0 */
AI_STATIC ai_array conv2d_23_scratch0_array;   /* Array #1 */
AI_STATIC ai_array conv2d_21_scratch1_array;   /* Array #2 */
AI_STATIC ai_array conv2d_21_scratch0_array;   /* Array #3 */
AI_STATIC ai_array conv2d_19_scratch1_array;   /* Array #4 */
AI_STATIC ai_array conv2d_19_scratch0_array;   /* Array #5 */
AI_STATIC ai_array conv2d_17_scratch1_array;   /* Array #6 */
AI_STATIC ai_array conv2d_17_scratch0_array;   /* Array #7 */
AI_STATIC ai_array conv2d_15_scratch1_array;   /* Array #8 */
AI_STATIC ai_array conv2d_15_scratch0_array;   /* Array #9 */
AI_STATIC ai_array conv2d_13_scratch1_array;   /* Array #10 */
AI_STATIC ai_array conv2d_13_scratch0_array;   /* Array #11 */
AI_STATIC ai_array conv2d_11_scratch1_array;   /* Array #12 */
AI_STATIC ai_array conv2d_11_scratch0_array;   /* Array #13 */
AI_STATIC ai_array conv2d_9_scratch1_array;   /* Array #14 */
AI_STATIC ai_array conv2d_9_scratch0_array;   /* Array #15 */
AI_STATIC ai_array conv2d_7_scratch1_array;   /* Array #16 */
AI_STATIC ai_array conv2d_7_scratch0_array;   /* Array #17 */
AI_STATIC ai_array conv2d_5_scratch1_array;   /* Array #18 */
AI_STATIC ai_array conv2d_5_scratch0_array;   /* Array #19 */
AI_STATIC ai_array conv2d_3_scratch1_array;   /* Array #20 */
AI_STATIC ai_array conv2d_3_scratch0_array;   /* Array #21 */
AI_STATIC ai_array conv2d_1_scratch1_array;   /* Array #22 */
AI_STATIC ai_array conv2d_1_scratch0_array;   /* Array #23 */
AI_STATIC ai_array conv2d_23_bias_array;   /* Array #24 */
AI_STATIC ai_array conv2d_23_weights_array;   /* Array #25 */
AI_STATIC ai_array conv2d_21_bias_array;   /* Array #26 */
AI_STATIC ai_array conv2d_21_weights_array;   /* Array #27 */
AI_STATIC ai_array conv2d_19_bias_array;   /* Array #28 */
AI_STATIC ai_array conv2d_19_weights_array;   /* Array #29 */
AI_STATIC ai_array conv2d_17_bias_array;   /* Array #30 */
AI_STATIC ai_array conv2d_17_weights_array;   /* Array #31 */
AI_STATIC ai_array conv2d_15_bias_array;   /* Array #32 */
AI_STATIC ai_array conv2d_15_weights_array;   /* Array #33 */
AI_STATIC ai_array conv2d_13_bias_array;   /* Array #34 */
AI_STATIC ai_array conv2d_13_weights_array;   /* Array #35 */
AI_STATIC ai_array conv2d_11_bias_array;   /* Array #36 */
AI_STATIC ai_array conv2d_11_weights_array;   /* Array #37 */
AI_STATIC ai_array conv2d_9_bias_array;   /* Array #38 */
AI_STATIC ai_array conv2d_9_weights_array;   /* Array #39 */
AI_STATIC ai_array conv2d_7_bias_array;   /* Array #40 */
AI_STATIC ai_array conv2d_7_weights_array;   /* Array #41 */
AI_STATIC ai_array conv2d_5_bias_array;   /* Array #42 */
AI_STATIC ai_array conv2d_5_weights_array;   /* Array #43 */
AI_STATIC ai_array conv2d_3_bias_array;   /* Array #44 */
AI_STATIC ai_array conv2d_3_weights_array;   /* Array #45 */
AI_STATIC ai_array conv2d_1_bias_array;   /* Array #46 */
AI_STATIC ai_array conv2d_1_weights_array;   /* Array #47 */
AI_STATIC ai_array input_3_output_array;   /* Array #48 */
AI_STATIC ai_array conv2d_1_output_array;   /* Array #49 */
AI_STATIC ai_array conv2d_3_output_array;   /* Array #50 */
AI_STATIC ai_array conv2d_5_output_array;   /* Array #51 */
AI_STATIC ai_array conv2d_7_output_array;   /* Array #52 */
AI_STATIC ai_array conv2d_9_output_array;   /* Array #53 */
AI_STATIC ai_array conv2d_11_output_array;   /* Array #54 */
AI_STATIC ai_array conv2d_13_output_array;   /* Array #55 */
AI_STATIC ai_array conv2d_15_output_array;   /* Array #56 */
AI_STATIC ai_array conv2d_17_output_array;   /* Array #57 */
AI_STATIC ai_array conv2d_19_output_array;   /* Array #58 */
AI_STATIC ai_array conv2d_21_output_array;   /* Array #59 */
AI_STATIC ai_array conv2d_23_output_array;   /* Array #60 */


/**  Forward network tensor declarations  *************************************/
AI_STATIC ai_tensor conv2d_23_scratch1;   /* Tensor #0 */
AI_STATIC ai_tensor conv2d_23_scratch0;   /* Tensor #1 */
AI_STATIC ai_tensor conv2d_21_scratch1;   /* Tensor #2 */
AI_STATIC ai_tensor conv2d_21_scratch0;   /* Tensor #3 */
AI_STATIC ai_tensor conv2d_19_scratch1;   /* Tensor #4 */
AI_STATIC ai_tensor conv2d_19_scratch0;   /* Tensor #5 */
AI_STATIC ai_tensor conv2d_17_scratch1;   /* Tensor #6 */
AI_STATIC ai_tensor conv2d_17_scratch0;   /* Tensor #7 */
AI_STATIC ai_tensor conv2d_15_scratch1;   /* Tensor #8 */
AI_STATIC ai_tensor conv2d_15_scratch0;   /* Tensor #9 */
AI_STATIC ai_tensor conv2d_13_scratch1;   /* Tensor #10 */
AI_STATIC ai_tensor conv2d_13_scratch0;   /* Tensor #11 */
AI_STATIC ai_tensor conv2d_11_scratch1;   /* Tensor #12 */
AI_STATIC ai_tensor conv2d_11_scratch0;   /* Tensor #13 */
AI_STATIC ai_tensor conv2d_9_scratch1;   /* Tensor #14 */
AI_STATIC ai_tensor conv2d_9_scratch0;   /* Tensor #15 */
AI_STATIC ai_tensor conv2d_7_scratch1;   /* Tensor #16 */
AI_STATIC ai_tensor conv2d_7_scratch0;   /* Tensor #17 */
AI_STATIC ai_tensor conv2d_5_scratch1;   /* Tensor #18 */
AI_STATIC ai_tensor conv2d_5_scratch0;   /* Tensor #19 */
AI_STATIC ai_tensor conv2d_3_scratch1;   /* Tensor #20 */
AI_STATIC ai_tensor conv2d_3_scratch0;   /* Tensor #21 */
AI_STATIC ai_tensor conv2d_1_scratch1;   /* Tensor #22 */
AI_STATIC ai_tensor conv2d_1_scratch0;   /* Tensor #23 */
AI_STATIC ai_tensor conv2d_23_bias;   /* Tensor #24 */
AI_STATIC ai_tensor conv2d_23_weights;   /* Tensor #25 */
AI_STATIC ai_tensor conv2d_21_bias;   /* Tensor #26 */
AI_STATIC ai_tensor conv2d_21_weights;   /* Tensor #27 */
AI_STATIC ai_tensor conv2d_19_bias;   /* Tensor #28 */
AI_STATIC ai_tensor conv2d_19_weights;   /* Tensor #29 */
AI_STATIC ai_tensor conv2d_17_bias;   /* Tensor #30 */
AI_STATIC ai_tensor conv2d_17_weights;   /* Tensor #31 */
AI_STATIC ai_tensor conv2d_15_bias;   /* Tensor #32 */
AI_STATIC ai_tensor conv2d_15_weights;   /* Tensor #33 */
AI_STATIC ai_tensor conv2d_13_bias;   /* Tensor #34 */
AI_STATIC ai_tensor conv2d_13_weights;   /* Tensor #35 */
AI_STATIC ai_tensor conv2d_11_bias;   /* Tensor #36 */
AI_STATIC ai_tensor conv2d_11_weights;   /* Tensor #37 */
AI_STATIC ai_tensor conv2d_9_bias;   /* Tensor #38 */
AI_STATIC ai_tensor conv2d_9_weights;   /* Tensor #39 */
AI_STATIC ai_tensor conv2d_7_bias;   /* Tensor #40 */
AI_STATIC ai_tensor conv2d_7_weights;   /* Tensor #41 */
AI_STATIC ai_tensor conv2d_5_bias;   /* Tensor #42 */
AI_STATIC ai_tensor conv2d_5_weights;   /* Tensor #43 */
AI_STATIC ai_tensor conv2d_3_bias;   /* Tensor #44 */
AI_STATIC ai_tensor conv2d_3_weights;   /* Tensor #45 */
AI_STATIC ai_tensor conv2d_1_bias;   /* Tensor #46 */
AI_STATIC ai_tensor conv2d_1_weights;   /* Tensor #47 */
AI_STATIC ai_tensor input_3_output;   /* Tensor #48 */
AI_STATIC ai_tensor conv2d_1_output;   /* Tensor #49 */
AI_STATIC ai_tensor conv2d_3_output;   /* Tensor #50 */
AI_STATIC ai_tensor conv2d_5_output;   /* Tensor #51 */
AI_STATIC ai_tensor conv2d_7_output;   /* Tensor #52 */
AI_STATIC ai_tensor conv2d_9_output;   /* Tensor #53 */
AI_STATIC ai_tensor conv2d_11_output;   /* Tensor #54 */
AI_STATIC ai_tensor conv2d_13_output;   /* Tensor #55 */
AI_STATIC ai_tensor conv2d_15_output;   /* Tensor #56 */
AI_STATIC ai_tensor conv2d_17_output;   /* Tensor #57 */
AI_STATIC ai_tensor conv2d_19_output;   /* Tensor #58 */
AI_STATIC ai_tensor conv2d_21_output;   /* Tensor #59 */
AI_STATIC ai_tensor conv2d_23_output;   /* Tensor #60 */


/**  Forward network tensor chain declarations  *******************************/
AI_STATIC_CONST ai_tensor_chain conv2d_1_chain;   /* Chain #0 */
AI_STATIC_CONST ai_tensor_chain conv2d_3_chain;   /* Chain #1 */
AI_STATIC_CONST ai_tensor_chain conv2d_5_chain;   /* Chain #2 */
AI_STATIC_CONST ai_tensor_chain conv2d_7_chain;   /* Chain #3 */
AI_STATIC_CONST ai_tensor_chain conv2d_9_chain;   /* Chain #4 */
AI_STATIC_CONST ai_tensor_chain conv2d_11_chain;   /* Chain #5 */
AI_STATIC_CONST ai_tensor_chain conv2d_13_chain;   /* Chain #6 */
AI_STATIC_CONST ai_tensor_chain conv2d_15_chain;   /* Chain #7 */
AI_STATIC_CONST ai_tensor_chain conv2d_17_chain;   /* Chain #8 */
AI_STATIC_CONST ai_tensor_chain conv2d_19_chain;   /* Chain #9 */
AI_STATIC_CONST ai_tensor_chain conv2d_21_chain;   /* Chain #10 */
AI_STATIC_CONST ai_tensor_chain conv2d_23_chain;   /* Chain #11 */


/**  Forward network layer declarations  **************************************/
AI_STATIC ai_layer_conv2d conv2d_1_layer; /* Layer #0 */
AI_STATIC ai_layer_conv2d conv2d_3_layer; /* Layer #1 */
AI_STATIC ai_layer_conv2d conv2d_5_layer; /* Layer #2 */
AI_STATIC ai_layer_conv2d conv2d_7_layer; /* Layer #3 */
AI_STATIC ai_layer_conv2d conv2d_9_layer; /* Layer #4 */
AI_STATIC ai_layer_conv2d conv2d_11_layer; /* Layer #5 */
AI_STATIC ai_layer_conv2d conv2d_13_layer; /* Layer #6 */
AI_STATIC ai_layer_conv2d conv2d_15_layer; /* Layer #7 */
AI_STATIC ai_layer_conv2d conv2d_17_layer; /* Layer #8 */
AI_STATIC ai_layer_conv2d conv2d_19_layer; /* Layer #9 */
AI_STATIC ai_layer_conv2d conv2d_21_layer; /* Layer #10 */
AI_STATIC ai_layer_conv2d conv2d_23_layer; /* Layer #11 */


/**  Array declarations section  **********************************************/
/* Array#0 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_23_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 229, AI_STATIC)

/* Array#1 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_23_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 76, AI_STATIC)

/* Array#2 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 924, AI_STATIC)

/* Array#3 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 200, AI_STATIC)

/* Array#4 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 932, AI_STATIC)

/* Array#5 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 200, AI_STATIC)

/* Array#6 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_17_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 940, AI_STATIC)

/* Array#7 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_17_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 200, AI_STATIC)

/* Array#8 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 948, AI_STATIC)

/* Array#9 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 200, AI_STATIC)

/* Array#10 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 956, AI_STATIC)

/* Array#11 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 200, AI_STATIC)

/* Array#12 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 964, AI_STATIC)

/* Array#13 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 200, AI_STATIC)

/* Array#14 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 972, AI_STATIC)

/* Array#15 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 200, AI_STATIC)

/* Array#16 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_7_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 980, AI_STATIC)

/* Array#17 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_7_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 200, AI_STATIC)

/* Array#18 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 988, AI_STATIC)

/* Array#19 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 200, AI_STATIC)

/* Array#20 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 996, AI_STATIC)

/* Array#21 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 200, AI_STATIC)

/* Array#22 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1004, AI_STATIC)

/* Array#23 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 92, AI_STATIC)

/* Array#24 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_23_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 1, AI_STATIC)

/* Array#25 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_23_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12, AI_STATIC)

/* Array#26 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 4, AI_STATIC)

/* Array#27 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)

/* Array#28 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 4, AI_STATIC)

/* Array#29 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)

/* Array#30 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_17_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 4, AI_STATIC)

/* Array#31 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_17_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)

/* Array#32 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 4, AI_STATIC)

/* Array#33 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)

/* Array#34 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 4, AI_STATIC)

/* Array#35 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)

/* Array#36 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 4, AI_STATIC)

/* Array#37 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)

/* Array#38 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 4, AI_STATIC)

/* Array#39 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)

/* Array#40 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_7_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 4, AI_STATIC)

/* Array#41 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_7_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)

/* Array#42 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 4, AI_STATIC)

/* Array#43 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)

/* Array#44 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 4, AI_STATIC)

/* Array#45 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)

/* Array#46 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 4, AI_STATIC)

/* Array#47 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12, AI_STATIC)

/* Array#48 */
AI_ARRAY_OBJ_DECLARE(
  input_3_output_array, AI_ARRAY_FORMAT_S8|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 253, AI_STATIC)

/* Array#49 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1004, AI_STATIC)

/* Array#50 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 996, AI_STATIC)

/* Array#51 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 988, AI_STATIC)

/* Array#52 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_7_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 980, AI_STATIC)

/* Array#53 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 972, AI_STATIC)

/* Array#54 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 964, AI_STATIC)

/* Array#55 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 956, AI_STATIC)

/* Array#56 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 948, AI_STATIC)

/* Array#57 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_17_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 940, AI_STATIC)

/* Array#58 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 932, AI_STATIC)

/* Array#59 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 924, AI_STATIC)

/* Array#60 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_23_output_array, AI_ARRAY_FORMAT_S8|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 229, AI_STATIC)

/**  Array metadata declarations section  *************************************/
/* Int quant #0 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_23_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(7.212308264570311e-05f),
    AI_PACK_INTQ_ZP(-96)))

/* Int quant #1 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00034719062387011945f),
    AI_PACK_INTQ_ZP(36)))

/* Int quant #2 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00038781308103352785f),
    AI_PACK_INTQ_ZP(-28)))

/* Int quant #3 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_17_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0008341401116922498f),
    AI_PACK_INTQ_ZP(-17)))

/* Int quant #4 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0017490482423454523f),
    AI_PACK_INTQ_ZP(-12)))

/* Int quant #5 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0026462033856660128f),
    AI_PACK_INTQ_ZP(-4)))

/* Int quant #6 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0039469110779464245f),
    AI_PACK_INTQ_ZP(2)))

/* Int quant #7 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_9_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0073577542789280415f),
    AI_PACK_INTQ_ZP(7)))

/* Int quant #8 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_7_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.009771876037120819f),
    AI_PACK_INTQ_ZP(5)))

/* Int quant #9 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00967630185186863f),
    AI_PACK_INTQ_ZP(3)))

/* Int quant #10 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.016053684055805206f),
    AI_PACK_INTQ_ZP(2)))

/* Int quant #11 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0478748194873333f),
    AI_PACK_INTQ_ZP(-1)))

/* Int quant #12 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_23_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(3.151615965180099e-05f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #13 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_23_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004034068435430527f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #14 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 4,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(2.5727074898895808e-05f, 3.087689037784003e-05f, 2.76410373771796e-05f, 1.9477627574815415e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0)))

/* Int quant #15 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 4,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0032930655870586634f, 0.0039522419683635235f, 0.003538052784278989f, 0.002493136329576373f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0)))

/* Int quant #16 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 4,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(2.429889536870178e-05f, 1.9231065380154178e-05f, 2.124016646121163e-05f, 2.026928632403724e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0)))

/* Int quant #17 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 4,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0031102586071938276f, 0.0024615763686597347f, 0.0027187413070350885f, 0.0025944686494767666f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0)))

/* Int quant #18 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_17_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 4,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(3.2001153158489615e-05f, 3.364196527400054e-05f, 2.8900491088279523e-05f, 3.176701284246519e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0)))

/* Int quant #19 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_17_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 4,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004096147604286671f, 0.004306171555072069f, 0.003699262859299779f, 0.004066177643835545f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0)))

/* Int quant #20 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 4,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(3.333910717628896e-05f, 2.62366247625323e-05f, 2.4876422685338184e-05f, 3.415039827814326e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0)))

/* Int quant #21 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 4,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004267405718564987f, 0.0033582879696041346f, 0.0031841821037232876f, 0.004371250979602337f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0)))

/* Int quant #22 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 4,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(2.4477931219735183e-05f, 3.014680441992823e-05f, 1.4892042599967681e-05f, 3.0307755878311582e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0)))

/* Int quant #23 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 4,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0031331751961261034f, 0.0038587909657508135f, 0.0019061814527958632f, 0.0038793927524238825f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0)))

/* Int quant #24 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 4,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(3.573563299141824e-05f, 2.7277028493699618e-05f, 3.808276233030483e-05f, 2.428103834972717e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0)))

/* Int quant #25 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 4,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004574161022901535f, 0.003491459647193551f, 0.004874593578279018f, 0.0031079729087650776f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0)))

/* Int quant #26 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_9_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 4,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(2.9691829695366323e-05f, 1.981091554625891e-05f, 3.626808393164538e-05f, 2.935317206720356e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0)))

/* Int quant #27 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_9_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 4,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0038005542010068893f, 0.0025357971899211407f, 0.0046423147432506084f, 0.0037572060246020555f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0)))

/* Int quant #28 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_7_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 4,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(3.05906796711497e-05f, 2.801074333547149e-05f, 4.018505205749534e-05f, 4.1645362216513604e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0)))

/* Int quant #29 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_7_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 4,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003915606997907162f, 0.0035853751469403505f, 0.005143686663359404f, 0.005330606363713741f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0)))

/* Int quant #30 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 4,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(3.355011358507909e-05f, 3.438108615227975e-05f, 3.737506267498247e-05f, 1.8076912965625525e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0)))

/* Int quant #31 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 4,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004294414538890123f, 0.004400779027491808f, 0.004784008022397757f, 0.002313844859600067f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0)))

/* Int quant #32 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 4,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(2.289497570018284e-05f, 4.0320705011254176e-05f, 5.5275053455261514e-05f, 4.091994560440071e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0)))

/* Int quant #33 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 4,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0029305568896234035f, 0.005161050241440535f, 0.007075206842273474f, 0.005237753037363291f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0)))

/* Int quant #34 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 4,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(4.0119211917044595e-05f, 0.00013210161705501378f, 0.00012931627861689776f, 0.0001341288589173928f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0)))

/* Int quant #35 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 4,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.01233641430735588f, 0.04062044620513916f, 0.03976397216320038f, 0.04124381020665169f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0)))

/* Int quant #36 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(input_3_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0032520967070013285f),
    AI_PACK_INTQ_ZP(10)))

/* Int quant #37 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0078125f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #38 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0078125f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #39 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0078125f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #40 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_7_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0078125f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #41 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_9_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0078125f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #42 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0078125f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #43 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0078125f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #44 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0078125f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #45 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_17_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0078125f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #46 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0078125f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #47 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0078125f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #48 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_23_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0078125f),
    AI_PACK_INTQ_ZP(0)))

/**  Tensor declarations section  *********************************************/
/* Tensor #0 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_23_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 229, 1), AI_STRIDE_INIT(4, 1, 1, 1, 229),
  1, &conv2d_23_scratch1_array, &conv2d_23_scratch1_intq)

/* Tensor #1 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_23_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 76, 1, 1), AI_STRIDE_INIT(4, 1, 1, 76, 76),
  1, &conv2d_23_scratch0_array, NULL)

/* Tensor #2 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 231, 1), AI_STRIDE_INIT(4, 1, 1, 4, 924),
  1, &conv2d_21_scratch1_array, &conv2d_21_scratch1_intq)

/* Tensor #3 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 200, 1, 1), AI_STRIDE_INIT(4, 1, 1, 200, 200),
  1, &conv2d_21_scratch0_array, NULL)

/* Tensor #4 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 233, 1), AI_STRIDE_INIT(4, 1, 1, 4, 932),
  1, &conv2d_19_scratch1_array, &conv2d_19_scratch1_intq)

/* Tensor #5 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 200, 1, 1), AI_STRIDE_INIT(4, 1, 1, 200, 200),
  1, &conv2d_19_scratch0_array, NULL)

/* Tensor #6 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_17_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 235, 1), AI_STRIDE_INIT(4, 1, 1, 4, 940),
  1, &conv2d_17_scratch1_array, &conv2d_17_scratch1_intq)

/* Tensor #7 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_17_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 200, 1, 1), AI_STRIDE_INIT(4, 1, 1, 200, 200),
  1, &conv2d_17_scratch0_array, NULL)

/* Tensor #8 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 237, 1), AI_STRIDE_INIT(4, 1, 1, 4, 948),
  1, &conv2d_15_scratch1_array, &conv2d_15_scratch1_intq)

/* Tensor #9 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 200, 1, 1), AI_STRIDE_INIT(4, 1, 1, 200, 200),
  1, &conv2d_15_scratch0_array, NULL)

/* Tensor #10 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 239, 1), AI_STRIDE_INIT(4, 1, 1, 4, 956),
  1, &conv2d_13_scratch1_array, &conv2d_13_scratch1_intq)

/* Tensor #11 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 200, 1, 1), AI_STRIDE_INIT(4, 1, 1, 200, 200),
  1, &conv2d_13_scratch0_array, NULL)

/* Tensor #12 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 241, 1), AI_STRIDE_INIT(4, 1, 1, 4, 964),
  1, &conv2d_11_scratch1_array, &conv2d_11_scratch1_intq)

/* Tensor #13 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 200, 1, 1), AI_STRIDE_INIT(4, 1, 1, 200, 200),
  1, &conv2d_11_scratch0_array, NULL)

/* Tensor #14 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 243, 1), AI_STRIDE_INIT(4, 1, 1, 4, 972),
  1, &conv2d_9_scratch1_array, &conv2d_9_scratch1_intq)

/* Tensor #15 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 200, 1, 1), AI_STRIDE_INIT(4, 1, 1, 200, 200),
  1, &conv2d_9_scratch0_array, NULL)

/* Tensor #16 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_7_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 245, 1), AI_STRIDE_INIT(4, 1, 1, 4, 980),
  1, &conv2d_7_scratch1_array, &conv2d_7_scratch1_intq)

/* Tensor #17 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_7_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 200, 1, 1), AI_STRIDE_INIT(4, 1, 1, 200, 200),
  1, &conv2d_7_scratch0_array, NULL)

/* Tensor #18 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 247, 1), AI_STRIDE_INIT(4, 1, 1, 4, 988),
  1, &conv2d_5_scratch1_array, &conv2d_5_scratch1_intq)

/* Tensor #19 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 200, 1, 1), AI_STRIDE_INIT(4, 1, 1, 200, 200),
  1, &conv2d_5_scratch0_array, NULL)

/* Tensor #20 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 249, 1), AI_STRIDE_INIT(4, 1, 1, 4, 996),
  1, &conv2d_3_scratch1_array, &conv2d_3_scratch1_intq)

/* Tensor #21 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 200, 1, 1), AI_STRIDE_INIT(4, 1, 1, 200, 200),
  1, &conv2d_3_scratch0_array, NULL)

/* Tensor #22 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 251, 1), AI_STRIDE_INIT(4, 1, 1, 4, 1004),
  1, &conv2d_1_scratch1_array, &conv2d_1_scratch1_intq)

/* Tensor #23 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 92, 1, 1), AI_STRIDE_INIT(4, 1, 1, 92, 92),
  1, &conv2d_1_scratch0_array, NULL)

/* Tensor #24 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_23_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &conv2d_23_bias_array, &conv2d_23_bias_intq)

/* Tensor #25 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_23_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 4, 3, 1, 1), AI_STRIDE_INIT(4, 1, 4, 12, 12),
  1, &conv2d_23_weights_array, &conv2d_23_weights_intq)

/* Tensor #26 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv2d_21_bias_array, &conv2d_21_bias_intq)

/* Tensor #27 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 4, 3, 1, 4), AI_STRIDE_INIT(4, 1, 4, 12, 12),
  1, &conv2d_21_weights_array, &conv2d_21_weights_intq)

/* Tensor #28 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv2d_19_bias_array, &conv2d_19_bias_intq)

/* Tensor #29 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 4, 3, 1, 4), AI_STRIDE_INIT(4, 1, 4, 12, 12),
  1, &conv2d_19_weights_array, &conv2d_19_weights_intq)

/* Tensor #30 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_17_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv2d_17_bias_array, &conv2d_17_bias_intq)

/* Tensor #31 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_17_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 4, 3, 1, 4), AI_STRIDE_INIT(4, 1, 4, 12, 12),
  1, &conv2d_17_weights_array, &conv2d_17_weights_intq)

/* Tensor #32 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv2d_15_bias_array, &conv2d_15_bias_intq)

/* Tensor #33 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 4, 3, 1, 4), AI_STRIDE_INIT(4, 1, 4, 12, 12),
  1, &conv2d_15_weights_array, &conv2d_15_weights_intq)

/* Tensor #34 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv2d_13_bias_array, &conv2d_13_bias_intq)

/* Tensor #35 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 4, 3, 1, 4), AI_STRIDE_INIT(4, 1, 4, 12, 12),
  1, &conv2d_13_weights_array, &conv2d_13_weights_intq)

/* Tensor #36 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv2d_11_bias_array, &conv2d_11_bias_intq)

/* Tensor #37 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 4, 3, 1, 4), AI_STRIDE_INIT(4, 1, 4, 12, 12),
  1, &conv2d_11_weights_array, &conv2d_11_weights_intq)

/* Tensor #38 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv2d_9_bias_array, &conv2d_9_bias_intq)

/* Tensor #39 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 4, 3, 1, 4), AI_STRIDE_INIT(4, 1, 4, 12, 12),
  1, &conv2d_9_weights_array, &conv2d_9_weights_intq)

/* Tensor #40 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_7_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv2d_7_bias_array, &conv2d_7_bias_intq)

/* Tensor #41 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_7_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 4, 3, 1, 4), AI_STRIDE_INIT(4, 1, 4, 12, 12),
  1, &conv2d_7_weights_array, &conv2d_7_weights_intq)

/* Tensor #42 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv2d_5_bias_array, &conv2d_5_bias_intq)

/* Tensor #43 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 4, 3, 1, 4), AI_STRIDE_INIT(4, 1, 4, 12, 12),
  1, &conv2d_5_weights_array, &conv2d_5_weights_intq)

/* Tensor #44 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv2d_3_bias_array, &conv2d_3_bias_intq)

/* Tensor #45 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 4, 3, 1, 4), AI_STRIDE_INIT(4, 1, 4, 12, 12),
  1, &conv2d_3_weights_array, &conv2d_3_weights_intq)

/* Tensor #46 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv2d_1_bias_array, &conv2d_1_bias_intq)

/* Tensor #47 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 1, 4), AI_STRIDE_INIT(4, 1, 1, 3, 3),
  1, &conv2d_1_weights_array, &conv2d_1_weights_intq)

/* Tensor #48 */
AI_TENSOR_OBJ_DECLARE(
  input_3_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 253, 1), AI_STRIDE_INIT(4, 1, 1, 1, 253),
  1, &input_3_output_array, &input_3_output_intq)

/* Tensor #49 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 251, 1), AI_STRIDE_INIT(4, 1, 1, 4, 1004),
  1, &conv2d_1_output_array, &conv2d_1_output_intq)

/* Tensor #50 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 249, 1), AI_STRIDE_INIT(4, 1, 1, 4, 996),
  1, &conv2d_3_output_array, &conv2d_3_output_intq)

/* Tensor #51 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 247, 1), AI_STRIDE_INIT(4, 1, 1, 4, 988),
  1, &conv2d_5_output_array, &conv2d_5_output_intq)

/* Tensor #52 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_7_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 245, 1), AI_STRIDE_INIT(4, 1, 1, 4, 980),
  1, &conv2d_7_output_array, &conv2d_7_output_intq)

/* Tensor #53 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 243, 1), AI_STRIDE_INIT(4, 1, 1, 4, 972),
  1, &conv2d_9_output_array, &conv2d_9_output_intq)

/* Tensor #54 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 241, 1), AI_STRIDE_INIT(4, 1, 1, 4, 964),
  1, &conv2d_11_output_array, &conv2d_11_output_intq)

/* Tensor #55 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 239, 1), AI_STRIDE_INIT(4, 1, 1, 4, 956),
  1, &conv2d_13_output_array, &conv2d_13_output_intq)

/* Tensor #56 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 237, 1), AI_STRIDE_INIT(4, 1, 1, 4, 948),
  1, &conv2d_15_output_array, &conv2d_15_output_intq)

/* Tensor #57 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_17_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 235, 1), AI_STRIDE_INIT(4, 1, 1, 4, 940),
  1, &conv2d_17_output_array, &conv2d_17_output_intq)

/* Tensor #58 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 233, 1), AI_STRIDE_INIT(4, 1, 1, 4, 932),
  1, &conv2d_19_output_array, &conv2d_19_output_intq)

/* Tensor #59 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 231, 1), AI_STRIDE_INIT(4, 1, 1, 4, 924),
  1, &conv2d_21_output_array, &conv2d_21_output_intq)

/* Tensor #60 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_23_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 229, 1), AI_STRIDE_INIT(4, 1, 1, 1, 229),
  1, &conv2d_23_output_array, &conv2d_23_output_intq)



/**  Layer declarations section  **********************************************/



AI_STATIC_CONST ai_i8 conv2d_1_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -125, -125, -125, -125, -124, -124, -123, -123, -123, -122, -121, -121, -120, -119, -118, -118, -117, -115, -114, -113, -112, -110, -108, -107, -105, -103, -100, -98, -95, -92, -89, -86, -83, -79, -75, -71, -66, -62, -57, -52, -47, -41, -36, -30, -24, -18, -12, -6, 0, 6, 12, 18, 24, 30, 36, 41, 47, 52, 57, 62, 66, 71, 75, 79, 83, 86, 89, 92, 95, 98, 100, 103, 105, 107, 108, 110, 112, 113, 114, 115, 117, 118, 118, 119, 120, 121, 121, 122, 123, 123, 123, 124, 124, 125, 125, 125, 125, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_1_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_1_nl_params_data, conv2d_1_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_1_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &input_3_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_1_weights, &conv2d_1_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_1_scratch0, &conv2d_1_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_1_layer, 1,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_3_layer, AI_STATIC,
  .tensors = &conv2d_1_chain, 
  .groups = 1, 
  .nl_params = &conv2d_1_nl_params, 
  .nl_func = nl_func_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_i8 conv2d_3_nl_params_data[] = { -124, -124, -124, -124, -124, -123, -123, -123, -123, -123, -123, -123, -122, -122, -122, -122, -122, -121, -121, -121, -121, -120, -120, -120, -120, -119, -119, -119, -119, -118, -118, -118, -117, -117, -117, -116, -116, -116, -115, -115, -115, -114, -114, -113, -113, -112, -112, -111, -111, -110, -110, -109, -109, -108, -107, -107, -106, -106, -105, -104, -104, -103, -102, -101, -101, -100, -99, -98, -97, -96, -95, -95, -94, -93, -92, -91, -90, -89, -87, -86, -85, -84, -83, -82, -80, -79, -78, -77, -75, -74, -72, -71, -70, -68, -67, -65, -64, -62, -61, -59, -57, -56, -54, -52, -51, -49, -47, -45, -43, -42, -40, -38, -36, -34, -32, -30, -28, -26, -24, -22, -20, -18, -16, -14, -12, -10, -8, -6, -4, -2, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 43, 45, 47, 49, 51, 52, 54, 56, 57, 59, 61, 62, 64, 65, 67, 68, 70, 71, 72, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 89, 90, 91, 92, 93, 94, 95, 95, 96, 97, 98, 99, 100, 101, 101, 102, 103, 104, 104, 105, 106, 106, 107, 107, 108, 109, 109, 110, 110, 111, 111, 112, 112, 113, 113, 114, 114, 115, 115, 115, 116, 116, 116, 117, 117, 117, 118, 118, 118, 119, 119, 119, 119, 120, 120, 120, 120, 121, 121, 121, 121, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_3_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_3_nl_params_data, conv2d_3_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_3_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_3_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_3_weights, &conv2d_3_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_3_scratch0, &conv2d_3_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_3_layer, 3,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_5_layer, AI_STATIC,
  .tensors = &conv2d_3_chain, 
  .groups = 1, 
  .nl_params = &conv2d_3_nl_params, 
  .nl_func = nl_func_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_i8 conv2d_5_nl_params_data[] = { -109, -109, -109, -108, -108, -107, -107, -107, -106, -106, -106, -105, -105, -104, -104, -103, -103, -103, -102, -102, -101, -101, -100, -100, -99, -99, -98, -98, -97, -97, -96, -96, -95, -95, -94, -93, -93, -92, -92, -91, -90, -90, -89, -89, -88, -87, -87, -86, -85, -85, -84, -83, -82, -82, -81, -80, -79, -79, -78, -77, -76, -75, -75, -74, -73, -72, -71, -70, -70, -69, -68, -67, -66, -65, -64, -63, -62, -61, -60, -59, -58, -58, -57, -56, -55, -53, -52, -51, -50, -49, -48, -47, -46, -45, -44, -43, -42, -41, -40, -38, -37, -36, -35, -34, -33, -32, -30, -29, -28, -27, -26, -24, -23, -22, -21, -20, -18, -17, -16, -15, -14, -12, -11, -10, -9, -7, -6, -5, -4, -2, -1, 0, 1, 2, 4, 5, 6, 7, 9, 10, 11, 12, 14, 15, 16, 17, 18, 20, 21, 22, 23, 24, 26, 27, 28, 29, 30, 32, 33, 34, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 55, 56, 57, 58, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 70, 71, 72, 73, 74, 75, 75, 76, 77, 78, 79, 79, 80, 81, 82, 82, 83, 84, 85, 85, 86, 87, 87, 88, 89, 89, 90, 90, 91, 92, 92, 93, 93, 94, 95, 95, 96, 96, 97, 97, 98, 98, 99, 99, 100, 100, 101, 101, 102, 102, 103, 103, 103, 104, 104, 105, 105, 106, 106, 106, 107 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_5_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_5_nl_params_data, conv2d_5_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_5_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_3_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_5_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_5_weights, &conv2d_5_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_5_scratch0, &conv2d_5_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_5_layer, 5,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_7_layer, AI_STATIC,
  .tensors = &conv2d_5_chain, 
  .groups = 1, 
  .nl_params = &conv2d_5_nl_params, 
  .nl_func = nl_func_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_i8 conv2d_7_nl_params_data[] = { -110, -110, -110, -109, -109, -109, -108, -108, -108, -107, -107, -106, -106, -106, -105, -105, -104, -104, -104, -103, -103, -102, -102, -101, -101, -100, -100, -99, -99, -98, -98, -97, -97, -96, -96, -95, -95, -94, -93, -93, -92, -92, -91, -90, -90, -89, -88, -88, -87, -86, -86, -85, -84, -84, -83, -82, -81, -81, -80, -79, -78, -78, -77, -76, -75, -74, -74, -73, -72, -71, -70, -69, -68, -67, -67, -66, -65, -64, -63, -62, -61, -60, -59, -58, -57, -56, -55, -54, -53, -52, -51, -50, -49, -48, -47, -45, -44, -43, -42, -41, -40, -39, -38, -36, -35, -34, -33, -32, -31, -29, -28, -27, -26, -25, -23, -22, -21, -20, -19, -17, -16, -15, -14, -12, -11, -10, -9, -7, -6, -5, -4, -3, -1, 0, 1, 3, 4, 5, 6, 7, 9, 10, 11, 12, 14, 15, 16, 17, 19, 20, 21, 22, 23, 25, 26, 27, 28, 29, 31, 32, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 67, 68, 69, 70, 71, 72, 73, 74, 74, 75, 76, 77, 78, 78, 79, 80, 81, 81, 82, 83, 84, 84, 85, 86, 86, 87, 88, 88, 89, 90, 90, 91, 92, 92, 93, 93, 94, 95, 95, 96, 96, 97, 97, 98, 98, 99, 99, 100, 100, 101, 101, 102, 102, 103, 103, 104, 104, 104, 105, 105, 106, 106, 106 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_7_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_7_nl_params_data, conv2d_7_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_7_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_5_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_7_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_7_weights, &conv2d_7_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_7_scratch0, &conv2d_7_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_7_layer, 7,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_9_layer, AI_STATIC,
  .tensors = &conv2d_7_chain, 
  .groups = 1, 
  .nl_params = &conv2d_7_nl_params, 
  .nl_func = nl_func_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_i8 conv2d_9_nl_params_data[] = { -97, -97, -96, -96, -95, -95, -95, -94, -94, -93, -93, -92, -92, -92, -91, -91, -90, -90, -89, -89, -88, -88, -87, -87, -86, -86, -85, -85, -84, -84, -83, -82, -82, -81, -81, -80, -80, -79, -78, -78, -77, -77, -76, -75, -75, -74, -74, -73, -72, -72, -71, -70, -70, -69, -68, -68, -67, -66, -66, -65, -64, -64, -63, -62, -61, -61, -60, -59, -58, -58, -57, -56, -55, -55, -54, -53, -52, -52, -51, -50, -49, -48, -48, -47, -46, -45, -44, -43, -43, -42, -41, -40, -39, -38, -37, -37, -36, -35, -34, -33, -32, -31, -30, -30, -29, -28, -27, -26, -25, -24, -23, -22, -21, -21, -20, -19, -18, -17, -16, -15, -14, -13, -12, -11, -10, -9, -8, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 30, 31, 32, 33, 34, 35, 36, 37, 37, 38, 39, 40, 41, 42, 43, 43, 44, 45, 46, 47, 48, 48, 49, 50, 51, 52, 52, 53, 54, 55, 55, 56, 57, 58, 58, 59, 60, 61, 61, 62, 63, 64, 64, 65, 66, 66, 67, 68, 68, 69, 70, 70, 71, 72, 72, 73, 74, 74, 75, 75, 76, 77, 77, 78, 78, 79, 80, 80, 81, 81, 82, 82, 83, 84, 84, 85, 85, 86, 86, 87, 87, 88, 88, 89, 89, 90, 90, 91 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_9_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_9_nl_params_data, conv2d_9_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_9_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_7_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_9_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_9_weights, &conv2d_9_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_9_scratch0, &conv2d_9_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_9_layer, 9,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_11_layer, AI_STATIC,
  .tensors = &conv2d_9_chain, 
  .groups = 1, 
  .nl_params = &conv2d_9_nl_params, 
  .nl_func = nl_func_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_i8 conv2d_11_nl_params_data[] = { -60, -60, -60, -59, -59, -58, -58, -58, -57, -57, -56, -56, -56, -55, -55, -54, -54, -54, -53, -53, -52, -52, -51, -51, -51, -50, -50, -49, -49, -48, -48, -48, -47, -47, -46, -46, -45, -45, -45, -44, -44, -43, -43, -42, -42, -41, -41, -40, -40, -40, -39, -39, -38, -38, -37, -37, -36, -36, -35, -35, -34, -34, -34, -33, -33, -32, -32, -31, -31, -30, -30, -29, -29, -28, -28, -27, -27, -26, -26, -25, -25, -24, -24, -23, -23, -22, -22, -22, -21, -21, -20, -20, -19, -19, -18, -18, -17, -17, -16, -16, -15, -15, -14, -14, -13, -13, -12, -12, -11, -11, -10, -10, -9, -9, -8, -8, -7, -7, -6, -6, -5, -5, -4, -4, -3, -3, -2, -2, -1, -1, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32, 33, 33, 34, 34, 34, 35, 35, 36, 36, 37, 37, 38, 38, 39, 39, 40, 40, 40, 41, 41, 42, 42, 43, 43, 44, 44, 45, 45, 45, 46, 46, 47, 47, 48, 48, 48, 49, 49, 50, 50, 51, 51, 51, 52, 52, 53, 53, 54, 54, 54, 55, 55, 56, 56, 56, 57, 57, 58, 58, 58 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_11_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_11_nl_params_data, conv2d_11_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_11_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_9_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_11_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_11_weights, &conv2d_11_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_11_scratch0, &conv2d_11_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_11_layer, 11,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_13_layer, AI_STATIC,
  .tensors = &conv2d_11_chain, 
  .groups = 1, 
  .nl_params = &conv2d_11_nl_params, 
  .nl_func = nl_func_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_i8 conv2d_13_nl_params_data[] = { -41, -40, -40, -40, -39, -39, -39, -38, -38, -38, -37, -37, -37, -37, -36, -36, -36, -35, -35, -35, -34, -34, -34, -33, -33, -33, -32, -32, -32, -32, -31, -31, -31, -30, -30, -30, -29, -29, -29, -28, -28, -28, -27, -27, -27, -26, -26, -26, -25, -25, -25, -24, -24, -24, -23, -23, -23, -22, -22, -22, -21, -21, -21, -20, -20, -20, -19, -19, -19, -18, -18, -18, -18, -17, -17, -17, -16, -16, -16, -15, -15, -15, -14, -14, -13, -13, -13, -12, -12, -12, -11, -11, -11, -10, -10, -10, -9, -9, -9, -8, -8, -8, -7, -7, -7, -6, -6, -6, -5, -5, -5, -4, -4, -4, -3, -3, -3, -2, -2, -2, -1, -1, -1, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 9, 9, 9, 10, 10, 10, 11, 11, 11, 12, 12, 12, 13, 13, 13, 14, 14, 15, 15, 15, 16, 16, 16, 17, 17, 17, 18, 18, 18, 18, 19, 19, 19, 20, 20, 20, 21, 21, 21, 22, 22, 22, 23, 23, 23, 24, 24, 24, 25, 25, 25, 26, 26, 26, 27, 27, 27, 28, 28, 28, 29, 29, 29, 30, 30, 30, 31, 31, 31, 32, 32, 32, 32, 33, 33, 33, 34, 34, 34, 35, 35, 35, 36, 36, 36, 37, 37, 37, 37, 38, 38, 38, 39, 39, 39, 40, 40, 40, 41, 41, 41, 41, 42, 42, 42, 43 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_13_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_13_nl_params_data, conv2d_13_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_13_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_11_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_13_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_13_weights, &conv2d_13_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_13_scratch0, &conv2d_13_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_13_layer, 13,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_15_layer, AI_STATIC,
  .tensors = &conv2d_13_chain, 
  .groups = 1, 
  .nl_params = &conv2d_13_nl_params, 
  .nl_func = nl_func_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_i8 conv2d_15_nl_params_data[] = { -26, -25, -25, -25, -25, -25, -24, -24, -24, -24, -23, -23, -23, -23, -23, -22, -22, -22, -22, -22, -21, -21, -21, -21, -20, -20, -20, -20, -20, -19, -19, -19, -19, -18, -18, -18, -18, -18, -17, -17, -17, -17, -16, -16, -16, -16, -16, -15, -15, -15, -15, -14, -14, -14, -14, -14, -13, -13, -13, -13, -12, -12, -12, -12, -12, -11, -11, -11, -11, -10, -10, -10, -10, -10, -9, -9, -9, -9, -8, -8, -8, -8, -8, -7, -7, -7, -7, -6, -6, -6, -6, -6, -5, -5, -5, -5, -4, -4, -4, -4, -4, -3, -3, -3, -3, -2, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 8, 9, 9, 9, 9, 10, 10, 10, 10, 10, 11, 11, 11, 11, 12, 12, 12, 12, 12, 13, 13, 13, 13, 14, 14, 14, 14, 14, 15, 15, 15, 15, 16, 16, 16, 16, 16, 17, 17, 17, 17, 18, 18, 18, 18, 18, 19, 19, 19, 19, 20, 20, 20, 20, 20, 21, 21, 21, 21, 22, 22, 22, 22, 22, 23, 23, 23, 23, 23, 24, 24, 24, 24, 25, 25, 25, 25, 25, 26, 26, 26, 26, 26, 27, 27, 27, 27, 28, 28, 28, 28, 28, 29, 29, 29, 29, 29, 30, 30, 30, 30, 31 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_15_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_15_nl_params_data, conv2d_15_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_15_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_13_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_15_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_15_weights, &conv2d_15_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_15_scratch0, &conv2d_15_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_15_layer, 15,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_17_layer, AI_STATIC,
  .tensors = &conv2d_15_chain, 
  .groups = 1, 
  .nl_params = &conv2d_15_nl_params, 
  .nl_func = nl_func_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_i8 conv2d_17_nl_params_data[] = { -12, -12, -12, -12, -11, -11, -11, -11, -11, -11, -11, -11, -11, -10, -10, -10, -10, -10, -10, -10, -10, -10, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -8, -8, -8, -8, -8, -8, -8, -8, -8, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -6, -6, -6, -6, -6, -6, -6, -6, -6, -5, -5, -5, -5, -5, -5, -5, -5, -5, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 10, 10, 10, 10, 10, 10, 10, 10, 11, 11, 11, 11, 11, 11, 11, 11, 11, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 13, 13, 13, 13, 13, 13, 13, 13, 13, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 15, 15, 15, 15, 15, 15, 15, 15 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_17_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_17_nl_params_data, conv2d_17_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_17_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_15_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_17_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_17_weights, &conv2d_17_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_17_scratch0, &conv2d_17_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_17_layer, 17,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_19_layer, AI_STATIC,
  .tensors = &conv2d_17_chain, 
  .groups = 1, 
  .nl_params = &conv2d_17_nl_params, 
  .nl_func = nl_func_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_i8 conv2d_19_nl_params_data[] = { -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_19_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_19_nl_params_data, conv2d_19_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_19_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_17_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_19_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_19_weights, &conv2d_19_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_19_scratch0, &conv2d_19_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_19_layer, 19,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_21_layer, AI_STATIC,
  .tensors = &conv2d_19_chain, 
  .groups = 1, 
  .nl_params = &conv2d_19_nl_params, 
  .nl_func = nl_func_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_i8 conv2d_21_nl_params_data[] = { -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_21_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_21_nl_params_data, conv2d_21_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_21_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_19_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_21_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_21_weights, &conv2d_21_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_21_scratch0, &conv2d_21_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_21_layer, 21,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_23_layer, AI_STATIC,
  .tensors = &conv2d_21_chain, 
  .groups = 1, 
  .nl_params = &conv2d_21_nl_params, 
  .nl_func = nl_func_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_i8 conv2d_23_nl_params_data[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_23_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_23_nl_params_data, conv2d_23_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_23_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_21_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_23_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_23_weights, &conv2d_23_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_23_scratch0, &conv2d_23_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_23_layer, 23,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA,
  &AI_NET_OBJ_INSTANCE, &conv2d_23_layer, AI_STATIC,
  .tensors = &conv2d_23_chain, 
  .groups = 1, 
  .nl_params = &conv2d_23_nl_params, 
  .nl_func = nl_func_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_OBJ_INIT(AI_BUFFER_FORMAT_U8,
                     1, 1, 684, 1,
                     NULL),
  AI_BUFFER_OBJ_INIT(AI_BUFFER_FORMAT_U8,
                     1, 1, 2200, 1,
                     NULL),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_WN_12_4_TFL_INT8_6_IN_NUM, &input_3_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_WN_12_4_TFL_INT8_6_OUT_NUM, &conv2d_23_output),
  &conv2d_1_layer, 0, NULL)



AI_DECLARE_STATIC
ai_bool wn_12_4_tfl_int8_6_configure_activations(
  ai_network* net_ctx, const ai_buffer* activation_buffer)
{
  AI_ASSERT(net_ctx &&  activation_buffer && activation_buffer->data)

  ai_ptr activations = AI_PTR(AI_PTR_ALIGN(activation_buffer->data, AI_WN_12_4_TFL_INT8_6_ACTIVATIONS_ALIGNMENT));
  AI_ASSERT(activations)
  AI_UNUSED(net_ctx)

  {
    /* Updating activations (byte) offsets */
    conv2d_23_scratch1_array.data = AI_PTR(activations + 1124);
    conv2d_23_scratch1_array.data_start = AI_PTR(activations + 1124);
    conv2d_23_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_23_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_21_scratch1_array.data = AI_PTR(activations + 200);
    conv2d_21_scratch1_array.data_start = AI_PTR(activations + 200);
    conv2d_21_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_21_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_19_scratch1_array.data = AI_PTR(activations + 1140);
    conv2d_19_scratch1_array.data_start = AI_PTR(activations + 1140);
    conv2d_19_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_19_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_17_scratch1_array.data = AI_PTR(activations + 200);
    conv2d_17_scratch1_array.data_start = AI_PTR(activations + 200);
    conv2d_17_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_17_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_15_scratch1_array.data = AI_PTR(activations + 1156);
    conv2d_15_scratch1_array.data_start = AI_PTR(activations + 1156);
    conv2d_15_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_15_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_13_scratch1_array.data = AI_PTR(activations + 200);
    conv2d_13_scratch1_array.data_start = AI_PTR(activations + 200);
    conv2d_13_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_13_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_11_scratch1_array.data = AI_PTR(activations + 1172);
    conv2d_11_scratch1_array.data_start = AI_PTR(activations + 1172);
    conv2d_11_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_11_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_9_scratch1_array.data = AI_PTR(activations + 200);
    conv2d_9_scratch1_array.data_start = AI_PTR(activations + 200);
    conv2d_9_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_9_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_7_scratch1_array.data = AI_PTR(activations + 1188);
    conv2d_7_scratch1_array.data_start = AI_PTR(activations + 1188);
    conv2d_7_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_7_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_5_scratch1_array.data = AI_PTR(activations + 200);
    conv2d_5_scratch1_array.data_start = AI_PTR(activations + 200);
    conv2d_5_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_5_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_3_scratch1_array.data = AI_PTR(activations + 1204);
    conv2d_3_scratch1_array.data_start = AI_PTR(activations + 1204);
    conv2d_3_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_3_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_1_scratch1_array.data = AI_PTR(activations + 200);
    conv2d_1_scratch1_array.data_start = AI_PTR(activations + 200);
    conv2d_1_scratch0_array.data = AI_PTR(activations + 108);
    conv2d_1_scratch0_array.data_start = AI_PTR(activations + 108);
    input_3_output_array.data = AI_PTR(NULL);
    input_3_output_array.data_start = AI_PTR(NULL);
    conv2d_1_output_array.data = AI_PTR(activations + 200);
    conv2d_1_output_array.data_start = AI_PTR(activations + 200);
    conv2d_3_output_array.data = AI_PTR(activations + 1204);
    conv2d_3_output_array.data_start = AI_PTR(activations + 1204);
    conv2d_5_output_array.data = AI_PTR(activations + 200);
    conv2d_5_output_array.data_start = AI_PTR(activations + 200);
    conv2d_7_output_array.data = AI_PTR(activations + 1188);
    conv2d_7_output_array.data_start = AI_PTR(activations + 1188);
    conv2d_9_output_array.data = AI_PTR(activations + 200);
    conv2d_9_output_array.data_start = AI_PTR(activations + 200);
    conv2d_11_output_array.data = AI_PTR(activations + 1172);
    conv2d_11_output_array.data_start = AI_PTR(activations + 1172);
    conv2d_13_output_array.data = AI_PTR(activations + 200);
    conv2d_13_output_array.data_start = AI_PTR(activations + 200);
    conv2d_15_output_array.data = AI_PTR(activations + 1156);
    conv2d_15_output_array.data_start = AI_PTR(activations + 1156);
    conv2d_17_output_array.data = AI_PTR(activations + 200);
    conv2d_17_output_array.data_start = AI_PTR(activations + 200);
    conv2d_19_output_array.data = AI_PTR(activations + 1140);
    conv2d_19_output_array.data_start = AI_PTR(activations + 1140);
    conv2d_21_output_array.data = AI_PTR(activations + 200);
    conv2d_21_output_array.data_start = AI_PTR(activations + 200);
    conv2d_23_output_array.data = AI_PTR(NULL);
    conv2d_23_output_array.data_start = AI_PTR(NULL);
    
  }
  return true;
}



AI_DECLARE_STATIC
ai_bool wn_12_4_tfl_int8_6_configure_weights(
  ai_network* net_ctx, const ai_buffer* weights_buffer)
{
  AI_ASSERT(net_ctx &&  weights_buffer && weights_buffer->data)

  ai_ptr weights = AI_PTR(weights_buffer->data);
  AI_ASSERT(weights)
  AI_UNUSED(net_ctx)

  {
    /* Updating weights (byte) offsets */
    
    conv2d_23_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_23_bias_array.data = AI_PTR(weights + 680);
    conv2d_23_bias_array.data_start = AI_PTR(weights + 680);
    conv2d_23_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_23_weights_array.data = AI_PTR(weights + 668);
    conv2d_23_weights_array.data_start = AI_PTR(weights + 668);
    conv2d_21_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_21_bias_array.data = AI_PTR(weights + 652);
    conv2d_21_bias_array.data_start = AI_PTR(weights + 652);
    conv2d_21_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_21_weights_array.data = AI_PTR(weights + 604);
    conv2d_21_weights_array.data_start = AI_PTR(weights + 604);
    conv2d_19_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_19_bias_array.data = AI_PTR(weights + 588);
    conv2d_19_bias_array.data_start = AI_PTR(weights + 588);
    conv2d_19_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_19_weights_array.data = AI_PTR(weights + 540);
    conv2d_19_weights_array.data_start = AI_PTR(weights + 540);
    conv2d_17_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_17_bias_array.data = AI_PTR(weights + 524);
    conv2d_17_bias_array.data_start = AI_PTR(weights + 524);
    conv2d_17_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_17_weights_array.data = AI_PTR(weights + 476);
    conv2d_17_weights_array.data_start = AI_PTR(weights + 476);
    conv2d_15_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_15_bias_array.data = AI_PTR(weights + 460);
    conv2d_15_bias_array.data_start = AI_PTR(weights + 460);
    conv2d_15_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_15_weights_array.data = AI_PTR(weights + 412);
    conv2d_15_weights_array.data_start = AI_PTR(weights + 412);
    conv2d_13_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_13_bias_array.data = AI_PTR(weights + 396);
    conv2d_13_bias_array.data_start = AI_PTR(weights + 396);
    conv2d_13_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_13_weights_array.data = AI_PTR(weights + 348);
    conv2d_13_weights_array.data_start = AI_PTR(weights + 348);
    conv2d_11_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_11_bias_array.data = AI_PTR(weights + 332);
    conv2d_11_bias_array.data_start = AI_PTR(weights + 332);
    conv2d_11_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_11_weights_array.data = AI_PTR(weights + 284);
    conv2d_11_weights_array.data_start = AI_PTR(weights + 284);
    conv2d_9_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_9_bias_array.data = AI_PTR(weights + 268);
    conv2d_9_bias_array.data_start = AI_PTR(weights + 268);
    conv2d_9_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_9_weights_array.data = AI_PTR(weights + 220);
    conv2d_9_weights_array.data_start = AI_PTR(weights + 220);
    conv2d_7_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_7_bias_array.data = AI_PTR(weights + 204);
    conv2d_7_bias_array.data_start = AI_PTR(weights + 204);
    conv2d_7_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_7_weights_array.data = AI_PTR(weights + 156);
    conv2d_7_weights_array.data_start = AI_PTR(weights + 156);
    conv2d_5_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_5_bias_array.data = AI_PTR(weights + 140);
    conv2d_5_bias_array.data_start = AI_PTR(weights + 140);
    conv2d_5_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_5_weights_array.data = AI_PTR(weights + 92);
    conv2d_5_weights_array.data_start = AI_PTR(weights + 92);
    conv2d_3_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_3_bias_array.data = AI_PTR(weights + 76);
    conv2d_3_bias_array.data_start = AI_PTR(weights + 76);
    conv2d_3_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_3_weights_array.data = AI_PTR(weights + 28);
    conv2d_3_weights_array.data_start = AI_PTR(weights + 28);
    conv2d_1_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_1_bias_array.data = AI_PTR(weights + 12);
    conv2d_1_bias_array.data_start = AI_PTR(weights + 12);
    conv2d_1_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_1_weights_array.data = AI_PTR(weights + 0);
    conv2d_1_weights_array.data_start = AI_PTR(weights + 0);
  }

  return true;
}


/**  PUBLIC APIs SECTION  *****************************************************/

AI_API_ENTRY
ai_bool ai_wn_12_4_tfl_int8_6_get_info(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if ( report && net_ctx )
  {
    ai_network_report r = {
      .model_name        = AI_WN_12_4_TFL_INT8_6_MODEL_NAME,
      .model_signature   = AI_WN_12_4_TFL_INT8_6_MODEL_SIGNATURE,
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
      
      .n_macc            = 131838,
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
ai_error ai_wn_12_4_tfl_int8_6_get_error(ai_handle network)
{
  return ai_platform_network_get_error(network);
}

AI_API_ENTRY
ai_error ai_wn_12_4_tfl_int8_6_create(
  ai_handle* network, const ai_buffer* network_config)
{
  return ai_platform_network_create(
    network, network_config, 
    &AI_NET_OBJ_INSTANCE,
    AI_TOOLS_API_VERSION_MAJOR, AI_TOOLS_API_VERSION_MINOR, AI_TOOLS_API_VERSION_MICRO);
}

AI_API_ENTRY
ai_handle ai_wn_12_4_tfl_int8_6_destroy(ai_handle network)
{
  return ai_platform_network_destroy(network);
}

AI_API_ENTRY
ai_bool ai_wn_12_4_tfl_int8_6_init(
  ai_handle network, const ai_network_params* params)
{
  ai_network* net_ctx = ai_platform_network_init(network, params);
  if ( !net_ctx ) return false;

  ai_bool ok = true;
  ok &= wn_12_4_tfl_int8_6_configure_weights(net_ctx, &params->params);
  ok &= wn_12_4_tfl_int8_6_configure_activations(net_ctx, &params->activations);

  ok &= ai_platform_network_post_init(network);

  return ok;
}


AI_API_ENTRY
ai_i32 ai_wn_12_4_tfl_int8_6_run(
  ai_handle network, const ai_buffer* input, ai_buffer* output)
{
  return ai_platform_network_process(network, input, output);
}

AI_API_ENTRY
ai_i32 ai_wn_12_4_tfl_int8_6_forward(ai_handle network, const ai_buffer* input)
{
  return ai_platform_network_process(network, input, NULL);
}




#undef AI_WN_12_4_TFL_INT8_6_MODEL_SIGNATURE
#undef AI_NET_OBJ_INSTANCE
#undef AI_TOOLS_VERSION_MAJOR
#undef AI_TOOLS_VERSION_MINOR
#undef AI_TOOLS_VERSION_MICRO
#undef AI_TOOLS_API_VERSION_MAJOR
#undef AI_TOOLS_API_VERSION_MINOR
#undef AI_TOOLS_API_VERSION_MICRO
#undef AI_TOOLS_DATE_TIME
#undef AI_TOOLS_COMPILE_TIME

