/* Copyright Statement:
 *
 * (C) 2017  Airoha Technology Corp. All rights reserved.
 *
 * This software/firmware and related documentation ("Airoha Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to Airoha Technology Corp. ("Airoha") and/or its licensors.
 * Without the prior written permission of Airoha and/or its licensors,
 * any reproduction, modification, use or disclosure of Airoha Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 * You may only use, reproduce, modify, or distribute (as applicable) Airoha Software
 * if you have agreed to and been bound by the applicable license agreement with
 * Airoha ("License Agreement") and been granted explicit permission to do so within
 * the License Agreement ("Permitted User").  If you are not a Permitted User,
 * please cease any access or use of Airoha Software immediately.
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT AIROHA SOFTWARE RECEIVED FROM AIROHA AND/OR ITS REPRESENTATIVES
 * ARE PROVIDED TO RECEIVER ON AN "AS-IS" BASIS ONLY. AIROHA EXPRESSLY DISCLAIMS ANY AND ALL
 * WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES AIROHA PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH AIROHA SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN AIROHA SOFTWARE. AIROHA SHALL ALSO NOT BE RESPONSIBLE FOR ANY AIROHA
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND AIROHA'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO AIROHA SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT AIROHA'S OPTION, TO REVISE OR REPLACE AIROHA SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * AIROHA FOR SUCH AIROHA SOFTWARE AT ISSUE.
 */
#ifndef __AUDIO_NVDM_COEF_DEFAULT_H__
#define __AUDIO_NVDM_COEF_DEFAULT_H__

#include "nvdm_rom_book.h"

/* DSP feature table corresponds to NvKey ID */
const dsp_feature_t g_dsp_feature_table[DSP0_FEATURE_MAX_NUM] = {
		{CODEC_NULL,              {NVKEY_END} },/*0x00 CODEC_NULL               */ /* Only copy in_ptr memory to out_ptr memory */
        {CODEC_DECODER_VP,        {NVKEY_END} },/*0x01 CODEC_DECODER_VP,        */
        {CODEC_DECODER_RT,        {NVKEY_END} },/*0x02 CODEC_DECODER_RT,        */
        {CODEC_DECODER_SBC,       {NVKEY_END} },/*0x03 CODEC_DECODER_SBC,       */
        {CODEC_DECODER_AAC,       {NVKEY_END} },/*0x04 CODEC_DECODER_AAC,       */
        {CODEC_DECODER_MP3,       {NVKEY_END} },/*0x05 CODEC_DECODER_MP3,       */
        {CODEC_DECODER_MSBC,      {NVKEY_END} },/*0x06 CODEC_DECODER_MSBC,      */
        {CODEC_DECODER_EC,        {NVKEY_END} },/*0x07 CODEC_DECODER_EC,        */
        {CODEC_DECODER_UART,      {NVKEY_END} },/*0x08 CODEC_DECODER_UART,      */
        {CODEC_DECODER_UART16BIT, {NVKEY_END} },/*0x09 CODEC_DECODER_UART16BIT, */
        {CODEC_DECODER_CELT_HD,   {NVKEY_END} },/*0x0A CODEC_DECODER_CELT_HD,   */
        {CODEC_DECODER_CVSD,      {NVKEY_END} },/*0x0B CVSD_Decoder,    */   // 120(NB), 240(WB)
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x0C _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x0D _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x0E _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x0F _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x10 _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x11 _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x12 _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x13 _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x14 _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x15 _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x16 _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x17 _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x18 _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x19 _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x1A _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x1B _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x1C _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x1D _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x1E _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x1F _Reserved,       */
                                  
        {CODEC_ENCODER_SBC,       {NVKEY_END} },/*0x20 CODEC_ENCODER_SBC,       */
        {CODEC_ENCODER_MSBC,      {NVKEY_END} },/*0x21 CODEC_ENCODER_MSBC,      */
        {CODEC_ENCODER_SB_WF,     {NVKEY_END} },/*0x22 CODEC_ENCODER_SB_WF,     */
        {CODEC_ENCODER_CVSD,      {NVKEY_END} },/*0x23 CVSD_Encoder,    */   // 60(NB), 120(WB)
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x24 _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x25 _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x26 _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x27 _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x28 _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x29 _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x2A _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x2B _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x2C _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x2D _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x2E _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x2F _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x30 _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x31 _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x32 _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x33 _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x34 _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x35 _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x36 _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x37 _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x38 _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x39 _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x3A _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x3B _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x3C _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x3D _Reserved,       */
        {DSP_FEATURE_MAX_NUM,     {NVKEY_END} },/*0x3E _Reserved,       */
        {DSP_SRC,                 {NVKEY_END} },/*0x3F  DSP_SRC,        */

        {FUNC_END,                {NVKEY_END} },/*0x40 FUNC_END,        */
        {FUNC_JOINT,              {NVKEY_END} },/*0x41 FUNC_JOINT,      */
        {FUNC_BRANCH,             {NVKEY_END} },/*0x42 FUNC_BRANCH,     */
        {FUNC_MUTE,               {NVKEY_END} },/*0x43 FUNC_MUTE,       */
        {FUNC_PEQ_A2DP,           {NVKEY_DSP_PARA_A2DP_AU_CPD, NVKEY_DSP_PARA_LINE_AU_CPD, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_AEC_NR, NVKEY_DSP_PARA_WB_RX_EQ, NVKEY_DSP_PARA_WB_TX_EQ, NVKEY_DSP_PARA_WB_TX_VO_CPD, NVKEY_END}},/*0x67 FUNC_GAMING_HEADSET,          */
        {FUNC_PEQ_LINEIN,         {NVKEY_DSP_PARA_A2DP_AU_CPD, NVKEY_DSP_PARA_LINE_AU_CPD, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_END} },/*0x45 FUNC_PEQ,        */
        {FUNC_LPF,                {NVKEY_END} },/*0x46 FUNC_LPF,        */
        {FUNC_CH_SEL,             {NVKEY_END} },/*0x47 FUNC_CH_SEL,     */
        {FUNC_SOUND_EFFECT,       {NVKEY_END} },/*0x48 FUNC_SOUND_EFFECT,       */
        {FUNC_PLC,                {NVKEY_DSP_PARA_PLC, NVKEY_END} },/*0x49 FUNC_PLC                 */
#if defined(MTK_INEAR_ENHANCEMENT) || defined(MTK_DUALMIC_INEAR)
        {FUNC_RX_NR,              {NVKEY_DSP_PARA_AEC_NR      , NVKEY_DSP_PARA_WB_TX_EQ, NVKEY_DSP_PARA_WB_RX_EQ, NVKEY_DSP_PARA_WB_TX_VO_CPD, NVKEY_DSP_PARA_WB_RX_VO_CPD, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_PLC, NVKEY_DSP_PARA_INEAR_EQ, NVKEY_DSP_PARA_AST_EQ, NVKEY_DSP_PARA_VOICE_TX_AGC, NVKEY_DSP_PARA_VOICE_WB_RX_AGC, NVKEY_END} },/*0x4A FUNC_RX_NR,       	    */
        {FUNC_TX_NR,              {NVKEY_DSP_PARA_AEC_NR      , NVKEY_DSP_PARA_NB_TX_EQ, NVKEY_DSP_PARA_NB_RX_EQ, NVKEY_DSP_PARA_WB_TX_VO_CPD, NVKEY_DSP_PARA_NB_RX_VO_CPD, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_PLC, NVKEY_DSP_PARA_INEAR_EQ, NVKEY_DSP_PARA_AST_EQ, NVKEY_DSP_PARA_VOICE_TX_AGC, NVKEY_DSP_PARA_VOICE_WB_RX_AGC, NVKEY_END} },/*0x4B FUNC_TX_NR,       	    */
#elif defined(MTK_3RD_PARTY_NR)
        {FUNC_RX_NR,              {NVKEY_DSP_PARA_AEC_NR      , NVKEY_DSP_PARA_WB_TX_EQ, NVKEY_DSP_PARA_WB_RX_EQ, NVKEY_DSP_PARA_WB_TX_VO_CPD, NVKEY_DSP_PARA_WB_RX_VO_CPD, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_PLC, NVKEY_DSP_PARA_RESERVED, NVKEY_DSP_PARA_WB_TX_FIR_EQ, NVKEY_DSP_PARA_VOICE_TX_AGC, NVKEY_DSP_PARA_VOICE_WB_RX_AGC, NVKEY_DSP_PARA_AST_EQ, NVKEY_END} },/*0x4A FUNC_RX_NR,               */
        {FUNC_TX_NR,              {NVKEY_DSP_PARA_AEC_NR      , NVKEY_DSP_PARA_NB_TX_EQ, NVKEY_DSP_PARA_NB_RX_EQ, NVKEY_DSP_PARA_WB_TX_VO_CPD, NVKEY_DSP_PARA_NB_RX_VO_CPD, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_PLC, NVKEY_DSP_PARA_RESERVED, NVKEY_DSP_PARA_NB_TX_FIR_EQ, NVKEY_DSP_PARA_VOICE_TX_AGC, NVKEY_DSP_PARA_VOICE_NB_RX_AGC, NVKEY_DSP_PARA_AST_EQ, NVKEY_END} },/*0x4B FUNC_TX_NR,               */
#elif defined(AIR_HFP_DNN_PATH_ENABLE)
        {FUNC_RX_NR,              {NVKEY_DSP_PARA_AEC_NR      , NVKEY_DSP_PARA_WB_TX_EQ, NVKEY_DSP_PARA_WB_RX_EQ, NVKEY_DSP_PARA_WB_TX_VO_CPD, NVKEY_DSP_PARA_WB_RX_VO_CPD, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_PLC, NVKEY_DSP_PARA_RESERVED, NVKEY_DSP_PARA_VOICE_TX_AGC, NVKEY_DSP_PARA_VOICE_WB_RX_AGC, NVKEY_END} },/*0x4A FUNC_RX_NR,               */
        {FUNC_TX_NR,              {NVKEY_DSP_PARA_AEC_NR      , NVKEY_DSP_PARA_NB_TX_EQ, NVKEY_DSP_PARA_NB_RX_EQ, NVKEY_DSP_PARA_WB_TX_VO_CPD, NVKEY_DSP_PARA_NB_RX_VO_CPD, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_PLC, NVKEY_DSP_PARA_RESERVED, NVKEY_DSP_PARA_VOICE_TX_AGC, NVKEY_DSP_PARA_VOICE_NB_RX_AGC, NVKEY_END} },/*0x4B FUNC_TX_NR,               */
#else
        {FUNC_RX_NR,              {NVKEY_DSP_PARA_AEC_NR      , NVKEY_DSP_PARA_WB_TX_EQ, NVKEY_DSP_PARA_WB_RX_EQ, NVKEY_DSP_PARA_WB_TX_VO_CPD, NVKEY_DSP_PARA_WB_RX_VO_CPD, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_PLC, NVKEY_DSP_PARA_VOICE_TX_AGC, NVKEY_DSP_PARA_VOICE_WB_RX_AGC, NVKEY_END} },/*0x4A FUNC_RX_NR,               */
        {FUNC_TX_NR,              {NVKEY_DSP_PARA_AEC_NR      , NVKEY_DSP_PARA_NB_TX_EQ, NVKEY_DSP_PARA_NB_RX_EQ, NVKEY_DSP_PARA_WB_TX_VO_CPD, NVKEY_DSP_PARA_NB_RX_VO_CPD, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_PLC, NVKEY_DSP_PARA_VOICE_TX_AGC, NVKEY_DSP_PARA_VOICE_NB_RX_AGC, NVKEY_END} },/*0x4B FUNC_TX_NR,               */
#endif
        {FUNC_RX_WB_CPD,          {NVKEY_DSP_PARA_WB_RX_VO_CPD, NVKEY_DSP_PARA_DIGITAL_GAINTABLE_SCO, NVKEY_END} },/*0x4C FUNC_RX_WB_CPD, 		    */
        {FUNC_RX_NB_CPD,          {NVKEY_DSP_PARA_NB_RX_VO_CPD, NVKEY_DSP_PARA_DIGITAL_GAINTABLE_SCO, NVKEY_END} },/*0x4D FUNC_RX_NB_CPD, 		    */
        {FUNC_TX_WB_CPD,          {NVKEY_DSP_PARA_WB_TX_VO_CPD, NVKEY_END} },/*0x4E FUNC_TX_WB_CPD,          */
        {FUNC_TX_NB_CPD,          {NVKEY_DSP_PARA_NB_TX_VO_CPD, NVKEY_END} },/*0x4F FUNC_TX_NB_CPD,          */
        {FUNC_VC,                 {NVKEY_DSP_PARA_VC, NVKEY_END} },/*0x50 FUNC_VC,       	        */
        {FUNC_VP_CPD,             {NVKEY_DSP_PARA_VP_CPD, NVKEY_DSP_PARA_DIGITAL_GAINTABLE_VP, NVKEY_END} },/*0x51 FUNC_VP_CPD,             */
        {FUNC_DUMP_STREAM1,       {NVKEY_END} },/*0x52 FUNC_DUMP_STREAM1,       */
        {FUNC_DUMP_STREAM2,       {NVKEY_END} },/*0x53 FUNC_DUMP_STREAM2,       */
        {FUNC_PEQ2,               {NVKEY_END} },/*0x54 FUNC_PEQ2,               */
        {FUNC_ANC1,               {NVKEY_DSP_PARA_ANC_L_FILTER1, NVKEY_DSP_PARA_ANC_R_FILTER1, NVKEY_DSP_PARA_ANC_SW_GAIN, NVKEY_END} },/*0x55 FUNC_ANC1,               */
        {FUNC_ANC2,               {NVKEY_DSP_PARA_ANC_L_FILTER2, NVKEY_DSP_PARA_ANC_R_FILTER2, NVKEY_DSP_PARA_ANC_SW_GAIN, NVKEY_END} },/*0x56 FUNC_ANC2,               */
        {FUNC_ANC3,               {NVKEY_DSP_PARA_ANC_L_FILTER3, NVKEY_DSP_PARA_ANC_R_FILTER3, NVKEY_DSP_PARA_ANC_SW_GAIN, NVKEY_END} },/*0x57 FUNC_ANC3,               */
        {FUNC_ANC4,               {NVKEY_DSP_PARA_ANC_L_FILTER4, NVKEY_DSP_PARA_ANC_R_FILTER4, NVKEY_DSP_PARA_ANC_SW_GAIN, NVKEY_END} },/*0x58 FUNC_ANC4,               */
        {FUNC_ANC5,               {NVKEY_DSP_PARA_ANC_L_FILTER5, NVKEY_DSP_PARA_ANC_R_FILTER5, NVKEY_DSP_PARA_ANC_SW_GAIN, NVKEY_END} },/*0x59 FUNC_ANC5,               */
        {FUNC_ANC6,               {NVKEY_DSP_PARA_ANC_L_FILTER6, NVKEY_DSP_PARA_ANC_R_FILTER6, NVKEY_DSP_PARA_ANC_SW_GAIN, NVKEY_END} },/*0x5A FUNC_ANC6,               */
        {FUNC_ANC7,               {NVKEY_DSP_PARA_ANC_L_FILTER7, NVKEY_DSP_PARA_ANC_R_FILTER7, NVKEY_DSP_PARA_ANC_SW_GAIN, NVKEY_END} },/*0x5B FUNC_ANC7,               */
        {FUNC_ANC_1,              {NVKEY_DSP_PARA_ANC_L_FILTER_1, NVKEY_DSP_PARA_ANC_R_FILTER_1, NVKEY_DSP_PARA_ANC_SW_GAIN, NVKEY_END} },/*,               */
        {FUNC_ANC_2,              {NVKEY_DSP_PARA_ANC_L_FILTER_2, NVKEY_DSP_PARA_ANC_R_FILTER_2, NVKEY_DSP_PARA_ANC_SW_GAIN, NVKEY_END} },/*,               */
        {FUNC_ANC_3,              {NVKEY_DSP_PARA_ANC_L_FILTER_3, NVKEY_DSP_PARA_ANC_R_FILTER_3, NVKEY_DSP_PARA_ANC_SW_GAIN, NVKEY_END} },/*,               */
        {FUNC_ANC_4,              {NVKEY_DSP_PARA_ANC_L_FILTER_4, NVKEY_DSP_PARA_ANC_R_FILTER_4, NVKEY_DSP_PARA_ANC_SW_GAIN, NVKEY_END} },/*,               */
        {FUNC_PASSTHRU_1,         {NVKEY_DSP_PARA_PASSTHRU_L_FILTER_1, NVKEY_DSP_PARA_PASSTHRU_R_FILTER_1, NVKEY_DSP_PARA_ANC_SW_GAIN, NVKEY_END} },/*,               */
        {FUNC_PASSTHRU_2,         {NVKEY_DSP_PARA_PASSTHRU_L_FILTER_2, NVKEY_DSP_PARA_PASSTHRU_R_FILTER_2, NVKEY_DSP_PARA_ANC_SW_GAIN, NVKEY_END} },/*,               */
        {FUNC_PASSTHRU_3,         {NVKEY_DSP_PARA_PASSTHRU_L_FILTER_3, NVKEY_DSP_PARA_PASSTHRU_R_FILTER_3, NVKEY_DSP_PARA_ANC_SW_GAIN, NVKEY_END} },/*,               */
#if defined(MTK_INEAR_ENHANCEMENT) || defined(MTK_DUALMIC_INEAR)
        {FUNC_VOICE_WB_ANC,       {NVKEY_DSP_PARA_AEC_NR      , NVKEY_DSP_PARA_WB_TX_EQ, NVKEY_DSP_PARA_WB_RX_EQ_2ND, NVKEY_DSP_PARA_WB_TX_VO_CPD, NVKEY_DSP_PARA_WB_RX_VO_CPD, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_PLC, NVKEY_DSP_PARA_INEAR_EQ, NVKEY_DSP_PARA_AST_EQ, NVKEY_DSP_PARA_VOICE_TX_AGC, NVKEY_DSP_PARA_VOICE_WB_RX_AGC, NVKEY_END} },/*0x5A FUNC_VOICE_WB_ANC,             */
        {FUNC_VOICE_NB_ANC,       {NVKEY_DSP_PARA_AEC_NR      , NVKEY_DSP_PARA_NB_TX_EQ, NVKEY_DSP_PARA_NB_RX_EQ_2ND, NVKEY_DSP_PARA_WB_TX_VO_CPD, NVKEY_DSP_PARA_NB_RX_VO_CPD, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_PLC, NVKEY_DSP_PARA_INEAR_EQ, NVKEY_DSP_PARA_AST_EQ, NVKEY_DSP_PARA_VOICE_TX_AGC, NVKEY_DSP_PARA_VOICE_NB_RX_AGC, NVKEY_END} },/*0x5B FUNC_VOICE_NB_ANC,             */
#elif defined(MTK_3RD_PARTY_NR)
        {FUNC_VOICE_WB_ANC,       {NVKEY_DSP_PARA_AEC_NR      , NVKEY_DSP_PARA_WB_TX_EQ, NVKEY_DSP_PARA_WB_RX_EQ_2ND, NVKEY_DSP_PARA_WB_TX_VO_CPD, NVKEY_DSP_PARA_WB_RX_VO_CPD, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_PLC, NVKEY_DSP_PARA_RESERVED, NVKEY_DSP_PARA_WB_TX_FIR_EQ, NVKEY_DSP_PARA_VOICE_TX_AGC, NVKEY_DSP_PARA_VOICE_WB_RX_AGC, NVKEY_DSP_PARA_VOICE_WB_RX_AGC, NVKEY_END} },/*0x4A FUNC_RX_NR,               */
        {FUNC_VOICE_NB_ANC,       {NVKEY_DSP_PARA_AEC_NR      , NVKEY_DSP_PARA_NB_TX_EQ, NVKEY_DSP_PARA_NB_RX_EQ_2ND, NVKEY_DSP_PARA_WB_TX_VO_CPD, NVKEY_DSP_PARA_NB_RX_VO_CPD, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_PLC, NVKEY_DSP_PARA_RESERVED, NVKEY_DSP_PARA_NB_TX_FIR_EQ, NVKEY_DSP_PARA_VOICE_TX_AGC, NVKEY_DSP_PARA_VOICE_NB_RX_AGC, NVKEY_DSP_PARA_VOICE_WB_RX_AGC, NVKEY_END} },/*0x4B FUNC_TX_NR,               */
#elif defined(AIR_HFP_DNN_PATH_ENABLE)
        {FUNC_VOICE_WB_ANC,       {NVKEY_DSP_PARA_AEC_NR      , NVKEY_DSP_PARA_WB_TX_EQ, NVKEY_DSP_PARA_WB_RX_EQ_2ND, NVKEY_DSP_PARA_WB_TX_VO_CPD, NVKEY_DSP_PARA_WB_RX_VO_CPD, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_PLC, NVKEY_DSP_PARA_RESERVED, NVKEY_DSP_PARA_VOICE_TX_AGC, NVKEY_DSP_PARA_VOICE_WB_RX_AGC, NVKEY_END} },/*0x4A FUNC_RX_NR,               */
        {FUNC_VOICE_NB_ANC,       {NVKEY_DSP_PARA_AEC_NR      , NVKEY_DSP_PARA_NB_TX_EQ, NVKEY_DSP_PARA_NB_RX_EQ_2ND, NVKEY_DSP_PARA_WB_TX_VO_CPD, NVKEY_DSP_PARA_NB_RX_VO_CPD, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_PLC, NVKEY_DSP_PARA_RESERVED, NVKEY_DSP_PARA_VOICE_TX_AGC, NVKEY_DSP_PARA_VOICE_NB_RX_AGC, NVKEY_END} },/*0x4B FUNC_TX_NR,               */
#else
        {FUNC_VOICE_WB_ANC,       {NVKEY_DSP_PARA_AEC_NR      , NVKEY_DSP_PARA_WB_TX_EQ, NVKEY_DSP_PARA_WB_RX_EQ_2ND, NVKEY_DSP_PARA_WB_TX_VO_CPD, NVKEY_DSP_PARA_WB_RX_VO_CPD, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_PLC, NVKEY_DSP_PARA_VOICE_TX_AGC, NVKEY_DSP_PARA_VOICE_WB_RX_AGC, NVKEY_END} },/*0x5A FUNC_VOICE_WB_ANC,             */
        {FUNC_VOICE_NB_ANC,       {NVKEY_DSP_PARA_AEC_NR      , NVKEY_DSP_PARA_NB_TX_EQ, NVKEY_DSP_PARA_NB_RX_EQ_2ND, NVKEY_DSP_PARA_WB_TX_VO_CPD, NVKEY_DSP_PARA_NB_RX_VO_CPD, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_PLC, NVKEY_DSP_PARA_VOICE_TX_AGC, NVKEY_DSP_PARA_VOICE_NB_RX_AGC, NVKEY_END} },/*0x5B FUNC_VOICE_NB_ANC,             */
#endif
        {FUNC_INS,                {NVKEY_DSP_PARA_INS, NVKEY_END} },/*0x65 FUNC_INS,                */
        {FUNC_ADAPTIVE_FF,        {NVKEY_DSP_PARA_ADAPTIVE_FF, NVKEY_END} },/*0x66 FUNC_ADAPTIVE_FF,          */
#if defined(AIR_BT_ULTRA_LOW_LATENCY_ENABLE) || defined(AIR_WIRED_AUDIO_ENABLE)
#if defined(MTK_INEAR_ENHANCEMENT) || defined(MTK_DUALMIC_INEAR)
#if defined(AIR_WIRED_AUDIO_ENABLE)
        {FUNC_GAMING_HEADSET,     {NVKEY_DSP_PARA_A2DP_AU_CPD, NVKEY_DSP_PARA_LINE_AU_CPD, NVKEY_DSP_PARA_INS, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_AEC_NR, NVKEY_DSP_PARA_WB_RX_EQ, NVKEY_DSP_PARA_WB_TX_EQ, NVKEY_DSP_PARA_WB_TX_VO_CPD, NVKEY_DSP_PARA_INEAR_EQ, NVKEY_DSP_PARA_AST_EQ, NVKEY_END}},/*0x67 FUNC_GAMING_HEADSET,          */
        {FUNC_GAMING_BOOM_MIC,    {NVKEY_DSP_PARA_A2DP_AU_CPD, NVKEY_DSP_PARA_LINE_AU_CPD, NVKEY_DSP_PARA_INS, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_AEC_NR_BOOMIC, NVKEY_DSP_PARA_WB_RX_EQ, NVKEY_DSP_PARA_WB_TX_EQ_BOOMIC, NVKEY_DSP_PARA_WB_TX_VO_CPD_BOOMIC, NVKEY_DSP_PARA_INEAR_EQ, NVKEY_DSP_PARA_AST_EQ, NVKEY_END} },/*0x68 FUNC_BOOM_MIC,          */
#else
        {FUNC_GAMING_HEADSET,     {NVKEY_DSP_PARA_A2DP_AU_CPD, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_AEC_NR, NVKEY_DSP_PARA_WB_RX_EQ, NVKEY_DSP_PARA_WB_TX_EQ, NVKEY_DSP_PARA_WB_TX_VO_CPD, NVKEY_DSP_PARA_INEAR_EQ, NVKEY_DSP_PARA_AST_EQ, NVKEY_END}},/*0x67 FUNC_GAMING_HEADSET,          */
        {FUNC_GAMING_BOOM_MIC,    {NVKEY_DSP_PARA_A2DP_AU_CPD, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_AEC_NR_BOOMIC, NVKEY_DSP_PARA_WB_RX_EQ, NVKEY_DSP_PARA_WB_TX_EQ_BOOMIC, NVKEY_DSP_PARA_WB_TX_VO_CPD_BOOMIC, NVKEY_DSP_PARA_INEAR_EQ, NVKEY_DSP_PARA_AST_EQ, NVKEY_END} },/*0x68 FUNC_BOOM_MIC,          */
#endif
#elif defined(MTK_3RD_PARTY_NR)
#if defined(AIR_WIRED_AUDIO_ENABLE)
        {FUNC_GAMING_HEADSET,     {NVKEY_DSP_PARA_A2DP_AU_CPD, NVKEY_DSP_PARA_LINE_AU_CPD, NVKEY_DSP_PARA_INS, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_AEC_NR, NVKEY_DSP_PARA_WB_RX_EQ, NVKEY_DSP_PARA_WB_TX_EQ, NVKEY_DSP_PARA_WB_TX_VO_CPD, NVKEY_DSP_PARA_RESERVED, NVKEY_DSP_PARA_WB_TX_FIR_EQ, NVKEY_DSP_PARA_AST_EQ, NVKEY_END} },/*0x67 FUNC_GAMING_HEADSET,          */
        {FUNC_GAMING_BOOM_MIC,    {NVKEY_DSP_PARA_A2DP_AU_CPD, NVKEY_DSP_PARA_LINE_AU_CPD, NVKEY_DSP_PARA_INS, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_AEC_NR_BOOMIC, NVKEY_DSP_PARA_WB_RX_EQ, NVKEY_DSP_PARA_WB_TX_EQ_BOOMIC, NVKEY_DSP_PARA_WB_TX_VO_CPD_BOOMIC, NVKEY_DSP_PARA_RESERVED, NVKEY_DSP_PARA_WB_TX_FIR_EQ_BOOMIC, NVKEY_DSP_PARA_AST_EQ, NVKEY_END} },/*0x68 FUNC_BOOM_MIC,          */
#else
        {FUNC_GAMING_HEADSET,     {NVKEY_DSP_PARA_A2DP_AU_CPD, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_AEC_NR, NVKEY_DSP_PARA_WB_RX_EQ, NVKEY_DSP_PARA_WB_TX_EQ, NVKEY_DSP_PARA_WB_TX_VO_CPD, NVKEY_DSP_PARA_RESERVED, NVKEY_DSP_PARA_WB_TX_FIR_EQ, NVKEY_DSP_PARA_AST_EQ, NVKEY_END} },/*0x67 FUNC_GAMING_HEADSET,          */
        {FUNC_GAMING_BOOM_MIC,    {NVKEY_DSP_PARA_A2DP_AU_CPD, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_AEC_NR_BOOMIC, NVKEY_DSP_PARA_WB_RX_EQ, NVKEY_DSP_PARA_WB_TX_EQ_BOOMIC, NVKEY_DSP_PARA_WB_TX_VO_CPD_BOOMIC, NVKEY_DSP_PARA_RESERVED, NVKEY_DSP_PARA_WB_TX_FIR_EQ_BOOMIC, NVKEY_DSP_PARA_AST_EQ, NVKEY_END} },/*0x68 FUNC_BOOM_MIC,          */
#endif
#else
#if defined(AIR_WIRED_AUDIO_ENABLE)
        {FUNC_GAMING_HEADSET,     {NVKEY_DSP_PARA_A2DP_AU_CPD, NVKEY_DSP_PARA_LINE_AU_CPD, NVKEY_DSP_PARA_INS, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_AEC_NR, NVKEY_DSP_PARA_WB_RX_EQ, NVKEY_DSP_PARA_WB_TX_EQ, NVKEY_DSP_PARA_WB_TX_VO_CPD, NVKEY_END}},/*0x67 FUNC_GAMING_HEADSET,          */
        {FUNC_GAMING_BOOM_MIC,    {NVKEY_DSP_PARA_A2DP_AU_CPD, NVKEY_DSP_PARA_LINE_AU_CPD, NVKEY_DSP_PARA_INS, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_AEC_NR_BOOMIC, NVKEY_DSP_PARA_WB_RX_EQ, NVKEY_DSP_PARA_WB_TX_EQ_BOOMIC, NVKEY_DSP_PARA_WB_TX_VO_CPD_BOOMIC, NVKEY_END} },/*0x68 FUNC_BOOM_MIC,          */
#else
        {FUNC_GAMING_HEADSET,     {NVKEY_DSP_PARA_A2DP_AU_CPD, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_AEC_NR, NVKEY_DSP_PARA_WB_RX_EQ, NVKEY_DSP_PARA_WB_TX_EQ, NVKEY_DSP_PARA_WB_TX_VO_CPD, NVKEY_END}},/*0x67 FUNC_GAMING_HEADSET,          */
        {FUNC_GAMING_BOOM_MIC,    {NVKEY_DSP_PARA_A2DP_AU_CPD, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_AEC_NR_BOOMIC, NVKEY_DSP_PARA_WB_RX_EQ, NVKEY_DSP_PARA_WB_TX_EQ_BOOMIC, NVKEY_DSP_PARA_WB_TX_VO_CPD_BOOMIC, NVKEY_END} },/*0x68 FUNC_BOOM_MIC,          */
#endif
#endif /*#if defined(MTK_INEAR_ENHANCEMENT) || defined(MTK_DUALMIC_INEAR)*/
#else
        {FUNC_GAMING_HEADSET,     {NVKEY_END}},/*0x67 FUNC_GAMING_HEADSET,          */
        {FUNC_GAMING_BOOM_MIC,    {NVKEY_END}},/*0x68 FUNC_BOOM_MIC,          */
#endif /*#if defined(AIR_BT_ULTRA_LOW_LATENCY_ENABLE)*/
#if defined(MTK_3RD_PARTY_NR)
        {FUNC_WB_BOOM_MIC,        {NVKEY_DSP_PARA_AEC_NR_BOOMIC, NVKEY_DSP_PARA_WB_TX_EQ_BOOMIC, NVKEY_DSP_PARA_WB_RX_EQ, NVKEY_DSP_PARA_WB_TX_VO_CPD_BOOMIC, NVKEY_DSP_PARA_WB_RX_VO_CPD, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_PLC, NVKEY_DSP_PARA_VOICE_TX_AGC, NVKEY_DSP_PARA_VOICE_WB_RX_AGC, NVKEY_DSP_PARA_RESERVED, NVKEY_DSP_PARA_WB_TX_FIR_EQ_BOOMIC, NVKEY_END} },/*0x69 FUNC_WB_BOOM_MIC,               */
        {FUNC_NB_BOOM_MIC,        {NVKEY_DSP_PARA_AEC_NR_BOOMIC, NVKEY_DSP_PARA_NB_TX_EQ_BOOMIC, NVKEY_DSP_PARA_NB_RX_EQ, NVKEY_DSP_PARA_WB_TX_VO_CPD_BOOMIC, NVKEY_DSP_PARA_NB_RX_VO_CPD, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_PLC, NVKEY_DSP_PARA_VOICE_TX_AGC, NVKEY_DSP_PARA_VOICE_NB_RX_AGC, NVKEY_DSP_PARA_RESERVED, NVKEY_DSP_PARA_NB_TX_FIR_EQ_BOOMIC, NVKEY_END} },/*0x6A FUNC_NB_BOOM_MIC,               */
#else
        {FUNC_WB_BOOM_MIC,        {NVKEY_DSP_PARA_AEC_NR_BOOMIC, NVKEY_DSP_PARA_WB_TX_EQ_BOOMIC, NVKEY_DSP_PARA_WB_RX_EQ, NVKEY_DSP_PARA_WB_TX_VO_CPD_BOOMIC, NVKEY_DSP_PARA_WB_RX_VO_CPD, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_PLC, NVKEY_DSP_PARA_VOICE_TX_AGC, NVKEY_DSP_PARA_VOICE_WB_RX_AGC, NVKEY_END} },/*0x69 FUNC_WB_BOOM_MIC,               */
        {FUNC_NB_BOOM_MIC,        {NVKEY_DSP_PARA_AEC_NR_BOOMIC, NVKEY_DSP_PARA_NB_TX_EQ_BOOMIC, NVKEY_DSP_PARA_NB_RX_EQ, NVKEY_DSP_PARA_WB_TX_VO_CPD_BOOMIC, NVKEY_DSP_PARA_NB_RX_VO_CPD, NVKEY_DSP_PARA_POSITIVE_GAIN, NVKEY_DSP_PARA_PLC, NVKEY_DSP_PARA_VOICE_TX_AGC, NVKEY_DSP_PARA_VOICE_NB_RX_AGC, NVKEY_END} },/*0x6A FUNC_NB_BOOM_MIC,               */
#endif
#if defined(AIR_ADVANCED_PASSTHROUGH_ENABLE)
        {FUNC_HEARING_AID,        {NVKEY_DSP_PARA_AFC, NVKEY_DSP_PARA_LD_NR_MISC, NVKEY_DSP_PARA_LD_NR_PARAMETER1, NVKEY_DSP_PARA_LD_NR_PARAMETER2, NVKEY_DSP_PARA_AT_AGC, NVKEY_DSP_PARA_AT_AGC_DRC, NVKEY_DSP_PARA_ADVANCED_PASSTHROUGH_MISC, NVKEY_END} },/*0x6B FUNC_HEARING_AID,               */
#else
        {FUNC_HEARING_AID,        {NVKEY_END} },/*0x6B FUNC_HEARING_AID,               */
#endif
#if defined(AIR_GAME_CHAT_VOLUME_SMART_BALANCE_ENABLE)
        {FUNC_GAME_CHAT_VOLUME_SMART_BALANCE,  {NVKEY_DSP_PARA_GAME_CHAT_VOLUME_SMART_BALANCE, NVKEY_END} },/*0x6C FUNC_GAME_CHAT_VOLUME_SMART_BALANCE,               */
#else
        {FUNC_GAME_CHAT_VOLUME_SMART_BALANCE,  {NVKEY_END} },/*0x6C FUNC_GAME_CHAT_VOLUME_SMART_BALANCE,               */
#endif
#if defined(MTK_INEAR_ENHANCEMENT) || defined(MTK_DUALMIC_INEAR)
        {FUNC_TX_NR_v2,           {NVKEY_DSP_PARA_NB_TX_EQ, NVKEY_DSP_PARA_INEAR_EQ, NVKEY_DSP_PARA_AST_EQ, NVKEY_DSP_PARA_VOICE_TX_AGC, NVKEY_END} },/*0x6D FUNC_TX_NR_v2,       */
#elif defined(MTK_3RD_PARTY_NR)
        {FUNC_TX_NR_v2,           {NVKEY_DSP_PARA_NB_TX_EQ, NVKEY_DSP_PARA_RESERVED, NVKEY_DSP_PARA_WB_TX_FIR_EQ, NVKEY_DSP_PARA_NB_TX_FIR_EQ, NVKEY_DSP_PARA_VOICE_TX_AGC, NVKEY_END} },/*0x6D FUNC_TX_NR_v2,       */
#elif defined(AIR_HFP_DNN_PATH_ENABLE)
        {FUNC_TX_NR_v2,           {NVKEY_DSP_PARA_NB_TX_EQ, NVKEY_DSP_PARA_RESERVED, NVKEY_DSP_PARA_VOICE_TX_AGC, NVKEY_END} },/*0x6D FUNC_TX_NR_v2,       */
#else
        {FUNC_TX_NR_v2,           {NVKEY_DSP_PARA_NB_TX_EQ, NVKEY_DSP_PARA_VOICE_TX_AGC, NVKEY_END} },/*0x6D FUNC_TX_NR_v2,       */
#endif
        {FUNC_TX_POST_ECNR,       {NVKEY_DSP_PARA_RESERVED, NVKEY_DSP_PARA_AEC_NR, NVKEY_DSP_PARA_WB_TX_FIR_EQ, NVKEY_DSP_PARA_WB_RX_EQ, NVKEY_DSP_PARA_WB_TX_EQ, NVKEY_DSP_PARA_AST_EQ, NVKEY_DSP_PARA_WB_TX_VO_CPD, NVKEY_END} },/*0x6E FUNC_TX_POST_ECNR,       */
};

#endif /*__AUDIO_NVDM_COEF_DEFAULT_H__*/
