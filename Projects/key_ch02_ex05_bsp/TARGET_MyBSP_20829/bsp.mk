################################################################################
# \file bsp.mk
#
# \brief
# Define the CYW920829M2EVK-02 target.
#
################################################################################
# \copyright
# Copyright 2019-2022 Cypress Semiconductor Corporation (an Infineon company) or
# an affiliate of Cypress Semiconductor Corporation
#
# SPDX-License-Identifier: Apache-2.0
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
################################################################################

ifeq ($(WHICHFILE),true)
$(info Processing $(lastword $(MAKEFILE_LIST)))
endif

# Any additional components to apply when using this board.
BSP_COMPONENTS:=BTFW-TX10

# Any additional defines to apply when using this board.
BSP_DEFINES:=CY_USING_HAL

# APP_IMAGE_TYPE
APPTYPE?=flash
# Set APP_SECURITY_TYPE to NORMAL_NO_SECURE for un-signed image
# Set APP_SECURITY_TYPE to SECURE for signed image
APP_SECURITY_TYPE?=NORMAL_NO_SECURE

# Specify the path to the linker script to use
ifeq ($(TOOLCHAIN),GCC_ARM)
	BSP_LINKER_SCRIPT_EXT:=ld
else ifeq ($(TOOLCHAIN),ARM)
	BSP_LINKER_SCRIPT_EXT:=sct
else ifeq ($(TOOLCHAIN),IAR)
	BSP_LINKER_SCRIPT_EXT:=icf
endif
MTB_BSP__LINKER_SCRIPT:=$(MTB_TOOLS__TARGET_DIR)/TOOLCHAIN_$(TOOLCHAIN)/linker_ns_$(APPTYPE).$(BSP_LINKER_SCRIPT_EXT)

# Path to the params blob for provisioning
CY_BSP_PROVISION_NORMAL_NON_SECURE_BINARIES=$(MTB_TOOLS__TARGET_DIR)/provision/in_params.bin

# Path to the flash loaders to patch for this board
CY_QSPI_FLM_DIR=$(MTB_TOOLS__TARGET_DIR)/config/FlashLoaders/

# Path to the patched flash loaders for this board
CY_QSPI_FLM_DIR_OUTPUT=$(MTB_TOOLS__TARGET_DIR)/config/GeneratedSource/

################################################################################
# ALL ITEMS BELOW THIS POINT ARE AUTO GENERATED BY THE BSP ASSISTANT TOOL.
# DO NOT MODIFY DIRECTLY. CHANGES SHOULD BE MADE THROUGH THE BSP ASSISTANT.
################################################################################

# Board device selection. MPN_LIST tracks what was selected in the BSP Assistant
# All other variables are derived by BSP Assistant based on the MPN_LIST.
MPN_LIST:=CYW20829B0LKML
DEVICE:=CYW20829B0LKML
DEVICE_COMPONENTS:=BTSS-IPC CAT1 CAT1B CYW20829 CYW20829B0
DEVICE_CYW20829B0LKML_CORES:=CORE_NAME_CM33_0
DEVICE_CYW20829B0LKML_DIE:=CYW20829
DEVICE_CYW20829B0LKML_FLASH_KB:=0
DEVICE_CYW20829B0LKML_SRAM_KB:=256
DEVICE_LIST:=CYW20829B0LKML
DEVICE_TOOL_IDS:=bsp-assistant bt-configurator device-configurator library-manager project-creator qspi-configurator smartio-configurator
RECIPE_DIR:=$(SEARCH_recipe-make-cat1b)
