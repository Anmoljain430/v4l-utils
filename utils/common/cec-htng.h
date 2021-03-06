/*
 * cec-htng - HDMI CEC messages for Hospitality Profile
 *
 * Copyright 2016-2017 Cisco Systems, Inc. and/or its affiliates. All rights reserved.
 *
 * This program is free software; you may redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * Alternatively you can redistribute this file under the terms of the
 * BSD license as stated below:
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. The names of its contributors may not be used to endorse or promote
 *    products derived from this software without specific prior written
 *    permission.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef _CEC_HTNG_H
#define _CEC_HTNG_H

#include <linux/cec.h>

#define VENDOR_ID_HTNG 0x00d38d

#define CEC_MSG_HTNG_TUNER_1PART_CHAN		0x00
/* HTNG Tuner Type Operand (htng_tuner_type) */
#define CEC_OP_HTNG_TUNER_TYPE_AIR		0x00
#define CEC_OP_HTNG_TUNER_TYPE_CABLE		0x01
#define CEC_OP_HTNG_TUNER_TYPE_SAT		0x02
#define CEC_OP_HTNG_TUNER_TYPE_NOT_SPECIFIED	0x03

#define CEC_MSG_HTNG_TUNER_2PART_CHAN		0x01
#define CEC_MSG_HTNG_INPUT_SEL_AV		0x02
#define CEC_MSG_HTNG_INPUT_SEL_PC		0x03
#define CEC_MSG_HTNG_INPUT_SEL_HDMI		0x04
#define CEC_MSG_HTNG_INPUT_SEL_COMPONENT	0x05
#define CEC_MSG_HTNG_INPUT_SEL_DVI		0x06
#define CEC_MSG_HTNG_INPUT_SEL_DP		0x07
#define CEC_MSG_HTNG_INPUT_SEL_USB		0x08

#define CEC_MSG_HTNG_SET_DEF_PWR_ON_INPUT_SRC	0x10
/* HTNG Input Source Operand (htng_input_src) */
#define CEC_OP_HTNG_INPUT_SRC_TUNER_1PART	0x00
#define CEC_OP_HTNG_INPUT_SRC_TUNER_2PART	0x01
#define CEC_OP_HTNG_INPUT_SRC_AV		0x02
#define CEC_OP_HTNG_INPUT_SRC_PC		0x03
#define CEC_OP_HTNG_INPUT_SRC_HDMI		0x04
#define CEC_OP_HTNG_INPUT_SRC_COMPONENT		0x05
#define CEC_OP_HTNG_INPUT_SRC_DVI		0x06
#define CEC_OP_HTNG_INPUT_SRC_DP		0x07
#define CEC_OP_HTNG_INPUT_SRC_USB		0x08

#define CEC_MSG_HTNG_SET_TV_SPEAKERS		0x20
#define CEC_MSG_HTNG_SET_DIG_AUDIO		0x21
#define CEC_MSG_HTNG_SET_ANA_AUDIO		0x22
#define CEC_MSG_HTNG_SET_DEF_PWR_ON_VOL		0x23
#define CEC_MSG_HTNG_SET_MAX_VOL		0x24
#define CEC_MSG_HTNG_SET_MIN_VOL		0x25

#define CEC_MSG_HTNG_SET_BLUE_SCREEN		0x40
/* HTNG TV Screen Color Operand (htng_tv_screen_color) */
#define CEC_OP_HTNG_TV_SCREEN_BLACK		0x00
#define CEC_OP_HTNG_TV_SCREEN_BLUE		0x01

#define CEC_MSG_HTNG_SET_BRIGHTNESS		0x41
#define CEC_MSG_HTNG_SET_COLOR			0x42
#define CEC_MSG_HTNG_SET_CONTRAST		0x43
#define CEC_MSG_HTNG_SET_SHARPNESS		0x44
#define CEC_MSG_HTNG_SET_HUE			0x45
#define CEC_MSG_HTNG_SET_LED_BACKLIGHT		0x46
#define CEC_MSG_HTNG_SET_TV_OSD_CONTROL		0x47
#define CEC_MSG_HTNG_SET_AUDIO_ONLY_DISPLAY	0x48

#define CEC_MSG_HTNG_SET_DATE			0x60
#define CEC_MSG_HTNG_SET_DATE_FORMAT		0x61
#define CEC_MSG_HTNG_SET_TIME			0x62
#define CEC_MSG_HTNG_SET_CLK_BRIGHTNESS_STANDBY	0x63
#define CEC_MSG_HTNG_SET_CLK_BRIGHTNESS_ON	0x64
#define CEC_MSG_HTNG_LED_CONTROL		0x65
/* HTNG LED Control Operand (htng_led_control) */
#define CEC_OP_HTNG_LED_CONTROL_DEFAULT		0x00
#define CEC_OP_HTNG_LED_CONTROL_ON		0x01
#define CEC_OP_HTNG_LED_CONTROL_OFF		0x02

#define CEC_MSG_HTNG_LOCK_TV_PWR_BUTTON		0x66
#define CEC_MSG_HTNG_LOCK_TV_VOL_BUTTONS	0x67
#define CEC_MSG_HTNG_LOCK_TV_CHAN_BUTTONS	0x68
#define CEC_MSG_HTNG_LOCK_TV_INPUT_BUTTONS	0x69
#define CEC_MSG_HTNG_LOCK_TV_OTHER_BUTTONS	0x6a
#define CEC_MSG_HTNG_LOCK_EVERYTHING		0x6b
#define CEC_MSG_HTNG_LOCK_EVERYTHING_BUT_PWR	0x6c
#define CEC_MSG_HTNG_HOTEL_MODE			0x6d

#define CEC_MSG_HTNG_SET_PWR_SAVING_PROFILE	0x80
#define CEC_MSG_HTNG_SET_SLEEP_TIMER		0x81
#define CEC_MSG_HTNG_SET_WAKEUP_TIME		0x82
#define CEC_MSG_HTNG_SET_AUTO_OFF_TIME		0x83
#define CEC_MSG_HTNG_SET_WAKEUP_SRC		0x84
#define CEC_MSG_HTNG_SET_INIT_WAKEUP_VOL	0x85
#define CEC_MSG_HTNG_CLR_ALL_SLEEP_WAKE		0x86
#define CEC_MSG_HTNG_GLOBAL_DIRECT_TUNE_FREQ	0x88
/* HTNG Channel Type Operand (htng_chan_type) */
#define CEC_OP_HTNG_CHAN_TYPE_AUTO		0x00
#define CEC_OP_HTNG_CHAN_TYPE_ANA_ANT		0x01
#define CEC_OP_HTNG_CHAN_TYPE_ANA_CABLE		0x02
#define CEC_OP_HTNG_CHAN_TYPE_DIG_ANT		0x03
#define CEC_OP_HTNG_CHAN_TYPE_DIG_CABLE		0x04
#define CEC_OP_HTNG_CHAN_TYPE_SATELLITE		0x06
/* HTNG Program Type Operand (htng_prog_type) */
#define CEC_OP_HTNG_PROG_TYPE_AV		0x00
#define CEC_OP_HTNG_PROG_TYPE_RADIO		0x01
/* HTNG System Type Operand (htng_system_type) */
#define CEC_OP_HTNG_SYSTEM_TYPE_PAL_BG		0x00
#define CEC_OP_HTNG_SYSTEM_TYPE_PAL_I		0x01
#define CEC_OP_HTNG_SYSTEM_TYPE_PAL_DK		0x02
#define CEC_OP_HTNG_SYSTEM_TYPE_PAL_M		0x03
#define CEC_OP_HTNG_SYSTEM_TYPE_PAL_N		0x04
#define CEC_OP_HTNG_SYSTEM_TYPE_SECAM_BG	0x05
#define CEC_OP_HTNG_SYSTEM_TYPE_SECAM_DK	0x06
#define CEC_OP_HTNG_SYSTEM_TYPE_SECAM_L		0x07
#define CEC_OP_HTNG_SYSTEM_TYPE_NTSC_M		0x08
/* HTNG Modulation Type Operand (htng_mod_type) */
#define CEC_OP_HTNG_MOD_TYPE_AUTO		0x00
#define CEC_OP_HTNG_MOD_TYPE_QPSK		0x01
#define CEC_OP_HTNG_MOD_TYPE_QCAM16		0x02
#define CEC_OP_HTNG_MOD_TYPE_QCAM32		0x03
#define CEC_OP_HTNG_MOD_TYPE_QCAM64		0x04
#define CEC_OP_HTNG_MOD_TYPE_QCAM128		0x05
#define CEC_OP_HTNG_MOD_TYPE_QCAM256		0x06
#define CEC_OP_HTNG_MOD_TYPE_DQPSK		0x07
/* HTNG Symbol Rate Operand (htng_symbol_rate) */
#define CEC_OP_HTNG_SYMBOL_RATE_AUTO		0x00
#define CEC_OP_HTNG_SYMBOL_RATE_MANUAL		0x01

#define CEC_MSG_HTNG_GLOBAL_DIRECT_TUNE_CHAN	0x89
#define CEC_MSG_HTNG_GLOBAL_DIRECT_TUNE_EXT_FREQ 0x8a
/* HTNG Extended Channel Type Operand (htng_ext_chan_type) */
#define CEC_OP_HTNG_EXT_CHAN_TYPE_AUTO		0x00
#define CEC_OP_HTNG_EXT_CHAN_TYPE_ANA_ANT	0x01
#define CEC_OP_HTNG_EXT_CHAN_TYPE_ANA_CABLE	0x02
#define CEC_OP_HTNG_EXT_CHAN_TYPE_DVB_T_ISDB_T_DTMB 0x03
#define CEC_OP_HTNG_EXT_CHAN_TYPE_DVB_C		0x04
#define CEC_OP_HTNG_EXT_CHAN_TYPE_DVB_T2	0x05
/* HTNG ONID Operand (htng_onid) */
#define CEC_OP_HTNG_ONID_AUTO			0x00
#define CEC_OP_HTNG_ONID_MANUAL			0x01
/* HTNG NID Operand (htng_nid) */
#define CEC_OP_HTNG_NID_AUTO			0x00
#define CEC_OP_HTNG_NID_MANUAL			0x01
/* HTNG TSID PLP Operand (htng_tsid_plp) */
#define CEC_OP_HTNG_TSID_PLP_AUTO		0x00
#define CEC_OP_HTNG_TSID_PLP_MANUAL		0x01

#endif
