/**
  ******************************************************************************
  * @file           : encoders.h
  * @brief          : Header for encoders.c file.
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __ENCODERS_H__
#define __ENCODERS_H__

#include "common_types.h"
#include "periphery.h"
#include "buttons.h"

#define   ENC_COUNT      1


void EncoderProcess (buttons_state_t * button_state_buf, dev_config_t * p_dev_config);
void EncodersInit (dev_config_t * p_dev_config);

#endif 	/* __BUTTONS_H__ */

