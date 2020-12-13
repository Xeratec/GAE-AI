/**
  ******************************************************************************
  * @file    wn_12_4_tfl_6_data.h
  * @author  AST Embedded Analytics Research Platform
  * @date    Thu Dec 10 18:06:28 2020
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

#ifndef __WN_12_4_TFL_6_DATA_H_
#define __WN_12_4_TFL_6_DATA_H_
#pragma once

#include "ai_platform.h"

#define AI_WN_12_4_TFL_6_DATA_CONFIG           AI_HANDLE_NULL

#define AI_WN_12_4_TFL_6_DATA_ACTIVATIONS_SIZE     (8000)

#define AI_WN_12_4_TFL_6_DATA_WEIGHTS_SIZE         (2196)

#define AI_WN_12_4_TFL_6_DATA_ACTIVATIONS(ptr_)  \
  AI_BUFFER_OBJ_INIT( \
    AI_BUFFER_FORMAT_U8, \
    1, 1, AI_WN_12_4_TFL_6_DATA_ACTIVATIONS_SIZE, 1, \
    AI_HANDLE_PTR(ptr_) )

#define AI_WN_12_4_TFL_6_DATA_WEIGHTS(ptr_)  \
  AI_BUFFER_OBJ_INIT( \
    AI_BUFFER_FORMAT_U8|AI_BUFFER_FMT_FLAG_CONST, \
    1, 1, AI_WN_12_4_TFL_6_DATA_WEIGHTS_SIZE, 1, \
    AI_HANDLE_PTR(ptr_) )


AI_API_DECLARE_BEGIN

/*!
 * @brief Get network weights array pointer as a handle ptr.
 * @ingroup wn_12_4_tfl_6_data
 * @return a ai_handle pointer to the weights array
 */
AI_API_ENTRY
ai_handle ai_wn_12_4_tfl_6_data_weights_get(void);


AI_API_DECLARE_END

#endif /* __WN_12_4_TFL_6_DATA_H_ */

