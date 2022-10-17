/*******************************************************************************
* File Name: cycfg_capsense_defines.h
*
* Description:
* CAPSENSE configuration defines.
*
* Note: This file is required for the CAPSENSE Middleware Library to build 
* successfully.
*
* This file should not be modified. It was automatically generated by
* CAPSENSE Configurator 5.0.0.2609
*
********************************************************************************
* Copyright 2022, Cypress Semiconductor Corporation (an Infineon company) 
* or an affiliate of Cypress Semiconductor Corporation.
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#if !defined(CYCFG_CAPSENSE_DEFINES_H)
#define CYCFG_CAPSENSE_DEFINES_H

#include <stddef.h>

/* General */
#define CY_CAPSENSE_WIDGET_COUNT                                                 (3u)
#define CY_CAPSENSE_ACTIVE_WIDGET_COUNT                                          (CY_CAPSENSE_WIDGET_COUNT)
#define CY_CAPSENSE_LP_WIDGET_COUNT                                              (0u)
#define CY_CAPSENSE_TOTAL_WIDGET_COUNT                                           (CY_CAPSENSE_WIDGET_COUNT)
#define CY_CAPSENSE_SENSOR_COUNT                                                 (7u)
#define CY_CAPSENSE_ELTD_COUNT                                                   (9u)
#define CY_CAPSENSE_PIN_COUNT                                                    (9u)
#define CY_CAPSENSE_SHIELD_PIN_COUNT                                             (0u)
#define CY_CAPSENSE_POSITION_SIZE                                                (1u)
#define CY_CAPSENSE_DEBOUNCE_SIZE                                                (3u)
#define CY_CAPSENSE_NOISE_ENVELOPE_SIZE                                          (5u)
#define CY_CAPSENSE_MFS_CH_NUMBER                                                (1u)
#define CY_CAPSENSE_RAW_HISTORY_SIZE                                             (0u)
#define CY_CAPSENSE_IIR_HISTORY_LOW_SIZE                                         (0u)
#define CY_CAPSENSE_POSITION_FILTER_HISTORY_SIZE                                 (0u)
#define CY_CAPSENSE_TOUCH_FILTER_HISTORY_SIZE                                    (0u)
#define CY_CAPSENSE_DIPLEX_SIZE                                                  (0u)
#define CY_CAPSENSE_CSD_TOUCHPAD_MAX_SENSORS_SIZE                                (0u)
#define CY_CAPSENSE_CSX_TOUCH_BUFFER_ENABLE                                      (0u)
#define CY_CAPSENSE_CSX_TOUCH_HISTORY_SIZE                                       (0u)
#define CY_CAPSENSE_BALLISTIC_WIDGET_COUNT                                       (0u)
#define CY_CAPSENSE_GESTURE_WIDGET_COUNT                                         (0u)

/* Sensing Methods */
#define CY_CAPSENSE_CSD_EN                                                       (1u)
#define CY_CAPSENSE_CSX_EN                                                       (1u)
#define CY_CAPSENSE_ISX_EN                                                       (0u)
#define CY_CAPSENSE_CSD_CALIBRATION_EN                                           (1u)
#define CY_CAPSENSE_CSX_CALIBRATION_EN                                           (1u)
#define CY_CAPSENSE_SMARTSENSE_FULL_EN                                           (1u)
#define CY_CAPSENSE_SMARTSENSE_HW_EN                                             (0u)
#define CY_CAPSENSE_SMARTSENSE_DISABLED                                          (0u)
#define CY_CAPSENSE_CSD_AUTOTUNE_EN                                              (CY_CAPSENSE_SMARTSENSE_FULL_EN || CY_CAPSENSE_SMARTSENSE_HW_EN)
#define CY_CAPSENSE_CSD_SHIELD_EN                                                (0u)
#define CY_CAPSENSE_CSD_SHIELD_CAP_EN                                            (0u)
#define CY_CAPSENSE_CSD_CHARGE_TRANSFER                                          (0u)
#define CY_CAPSENSE_CSD_IDAC_COMP_EN                                             (1u)
#define CY_CAPSENSE_CSD_IDAC_AUTO_GAIN_EN                                        (1u)
#define CY_CAPSENSE_CSD_IDAC_ROW_COL_ALIGN_EN                                    (1u)
#define CY_CAPSENSE_LFSR_EN                                                      (1u)
#define CY_CAPSENSE_LFSR_AUTO_EN                                                 (1u)
#define CY_CAPSENSE_CLOCK_SOURCE_AUTO_EN                                         (1u)

/* Filtering */
#define CY_CAPSENSE_ADAPTIVE_FILTER_EN                                           (0u)
#define CY_CAPSENSE_BALLISTIC_MULTIPLIER_EN                                      (0u)
#define CY_CAPSENSE_RAWCOUNT_FILTER_EN                                           (0u)
#define CY_CAPSENSE_REGULAR_RC_IIR_FILTER_EN                                     (0u)
#define CY_CAPSENSE_REGULAR_RC_MEDIAN_FILTER_EN                                  (0u)
#define CY_CAPSENSE_REGULAR_RC_AVERAGE_FILTER_EN                                 (0u)
#define CY_CAPSENSE_REGULAR_RC_FILTER_EN                                         (CY_CAPSENSE_REGULAR_RC_IIR_FILTER_EN || CY_CAPSENSE_REGULAR_RC_MEDIAN_FILTER_EN || CY_CAPSENSE_REGULAR_RC_AVERAGE_FILTER_EN)
#define CY_CAPSENSE_PROX_RC_IIR_FILTER_EN                                        (0u)
#define CY_CAPSENSE_PROX_RC_MEDIAN_FILTER_EN                                     (0u)
#define CY_CAPSENSE_PROX_RC_AVERAGE_FILTER_EN                                    (0u)
#define CY_CAPSENSE_PROX_RC_FILTER_EN                                            (CY_CAPSENSE_PROX_RC_IIR_FILTER_EN || CY_CAPSENSE_PROX_RC_MEDIAN_FILTER_EN || CY_CAPSENSE_PROX_RC_AVERAGE_FILTER_EN)
#define CY_CAPSENSE_POSITION_FILTER_EN                                           (0u)
#define CY_CAPSENSE_CSD_POSITION_FILTER_EN                                       (0u)
#define CY_CAPSENSE_CSX_POSITION_FILTER_EN                                       (0u)
#define CY_CAPSENSE_POS_IIR_FILTER_EN                                            (0u)
#define CY_CAPSENSE_POS_MEDIAN_FILTER_EN                                         (0u)
#define CY_CAPSENSE_POS_AVERAGE_FILTER_EN                                        (0u)
#define CY_CAPSENSE_POS_JITTER_FILTER_EN                                         (0u)

/* Widgets */
#define CY_CAPSENSE_CSD_BUTTON_EN                                                (0u)
#define CY_CAPSENSE_CSD_MATRIX_EN                                                (0u)
#define CY_CAPSENSE_CSD_SLIDER_EN                                                (1u)
#define CY_CAPSENSE_CSD_TOUCHPAD_EN                                              (0u)
#define CY_CAPSENSE_CSD_PROXIMITY_EN                                             (0u)
#define CY_CAPSENSE_CSX_BUTTON_EN                                                (1u)
#define CY_CAPSENSE_CSX_SLIDER_EN                                                (0u)
#define CY_CAPSENSE_CSX_MATRIX_EN                                                (0u)
#define CY_CAPSENSE_CSX_TOUCHPAD_EN                                              (0u)
#define CY_CAPSENSE_ISX_BUTTON_EN                                                (0u)
#define CY_CAPSENSE_ISX_PROXIMITY_EN                                             (0u)
#define CY_CAPSENSE_ISX_LINEAR_SLIDER_EN                                         (0u)
#define CY_CAPSENSE_ISX_DIPLEX_SLIDER_EN                                         (0u)
#define CY_CAPSENSE_ADVANCED_CENTROID_5X5_EN                                     (0u)
#define CY_CAPSENSE_CSD_LINEAR_SLIDER_EN                                         (1u)
#define CY_CAPSENSE_CSD_RADIAL_SLIDER_EN                                         (0u)
#define CY_CAPSENSE_CSD_DIPLEX_SLIDER_EN                                         (0u)
#define CY_CAPSENSE_CSX_LINEAR_SLIDER_EN                                         (0u)
#define CY_CAPSENSE_CSX_DIPLEX_SLIDER_EN                                         (0u)
#define CY_CAPSENSE_GANGED_SNS_EN                                                (0u)
#define CY_CAPSENSE_CSD_GANGED_SNS_EN                                            (0u)
#define CY_CAPSENSE_CSX_GANGED_SNS_EN                                            (0u)
#define CY_CAPSENSE_BUTTON_EN                                                    (1u)
#define CY_CAPSENSE_MATRIX_EN                                                    (0u)
#define CY_CAPSENSE_SLIDER_EN                                                    (1u)
#define CY_CAPSENSE_LINEAR_SLIDER_EN                                             (1u)
#define CY_CAPSENSE_RADIAL_SLIDER_EN                                             (0u)
#define CY_CAPSENSE_DIPLEX_SLIDER_EN                                             (0u)
#define CY_CAPSENSE_TOUCHPAD_EN                                                  (0u)
#define CY_CAPSENSE_PROXIMITY_EN                                                 (0u)

/* Features */
#define CY_CAPSENSE_GESTURE_EN                                                   (0u)
#define CY_CAPSENSE_MULTI_FREQUENCY_SCAN_EN                                      (0u)
#define CY_CAPSENSE_MULTI_FREQUENCY_WIDGET_EN                                    (0u)
#define CY_CAPSENSE_SNS_AUTO_RESET_EN                                            (0u)

/* Self-test */
#define CY_CAPSENSE_BIST_EN                                                      (0u)
#define CY_CAPSENSE_TST_WDGT_CRC_EN                                              (0u)
#define CY_CAPSENSE_TST_BSLN_INTEGRITY_EN                                        (0u)
#define CY_CAPSENSE_TST_RAW_INTEGRITY_EN                                         (0u)
#define CY_CAPSENSE_TST_SNS_SHORT_EN                                             (0u)
#define CY_CAPSENSE_TST_SNS_CAP_EN                                               (0u)
#define CY_CAPSENSE_TST_SH_CAP_EN                                                (0u)
#define CY_CAPSENSE_TST_EXTERNAL_CAP_EN                                          (0u)
#define CY_CAPSENSE_TST_VDDA_EN                                                  (0u)


#endif /* CYCFG_CAPSENSE_DEFINES_H */

/* [] END OF FILE */
