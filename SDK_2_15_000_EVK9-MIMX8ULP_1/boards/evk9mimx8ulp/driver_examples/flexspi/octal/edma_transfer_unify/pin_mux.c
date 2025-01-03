/*
 * Copyright 2023 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v13.0
processor: MIMX8UD5xxx08
package_id: MIMX8UD5DVK08
mcu_data: ksdk2_0
processor_version: 0.13.4
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "fsl_common.h"
#include "fsl_iomuxc.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: cm33}
- pin_list:
  - {pin_num: D2, peripheral: LPUART1, signal: lpuart_tx, pin_signal: PTA10, PS: UP, PE: ENABLED, SRE: STANDARD, ODE: PUSH_PULL, DSE: STANDARD, LK: UNLOCK, IBE: DISABLED,
    OBE: DISABLED, DFE: DISABLED, DFCS: IPGCLK, DFD: ZERO, INV: NotInvert}
  - {pin_num: C1, peripheral: LPUART1, signal: lpuart_rx, pin_signal: PTA11, PS: UP, PE: ENABLED}
  - {pin_num: B20, peripheral: FLEXSPI0, signal: flexspi_a_ss0_b, pin_signal: PTC5, DSE: HIDRIVE}
  - {pin_num: D20, peripheral: FLEXSPI0, signal: flexspi_a_sclk, pin_signal: PTC6, DSE: HIDRIVE}
  - {pin_num: A17, peripheral: FLEXSPI0, signal: flexspi_a_dqs, pin_signal: PTC0, PE: ENABLED, DSE: HIDRIVE}
  - {pin_num: B18, peripheral: FLEXSPI0, signal: 'flexspi_a_data, 7', pin_signal: PTC1, DSE: HIDRIVE}
  - {pin_num: D18, peripheral: FLEXSPI0, signal: 'flexspi_a_data, 6', pin_signal: PTC2, DSE: HIDRIVE}
  - {pin_num: F18, peripheral: FLEXSPI0, signal: 'flexspi_a_data, 5', pin_signal: PTC3, DSE: HIDRIVE}
  - {pin_num: A19, peripheral: FLEXSPI0, signal: 'flexspi_a_data, 4', pin_signal: PTC4, DSE: HIDRIVE}
  - {pin_num: A21, peripheral: FLEXSPI0, signal: 'flexspi_a_data, 3', pin_signal: PTC7, DSE: HIDRIVE}
  - {pin_num: C21, peripheral: FLEXSPI0, signal: 'flexspi_a_data, 2', pin_signal: PTC8, DSE: HIDRIVE}
  - {pin_num: F20, peripheral: FLEXSPI0, signal: 'flexspi_a_data, 1', pin_signal: PTC9, DSE: HIDRIVE}
  - {pin_num: B22, peripheral: FLEXSPI0, signal: 'flexspi_a_data, 0', pin_signal: PTC10, DSE: HIDRIVE}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void) {                                /*!< Function assigned for the core: Cortex-M33[cm33] */
    IOMUXC_SetPinMux(IOMUXC_PTA10_LPUART1_TX, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTA10_LPUART1_TX,
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTA11_LPUART1_RX, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTA11_LPUART1_RX,
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC0_FLEXSPI0_A_DQS, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC0_FLEXSPI0_A_DQS,
                        IOMUXC_PCR_DSE_MASK |
                        IOMUXC_PCR_PE_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC1_FLEXSPI0_A_DATA7, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC1_FLEXSPI0_A_DATA7,
                        IOMUXC_PCR_DSE_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC10_FLEXSPI0_A_DATA0, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC10_FLEXSPI0_A_DATA0,
                        IOMUXC_PCR_DSE_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC2_FLEXSPI0_A_DATA6, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC2_FLEXSPI0_A_DATA6,
                        IOMUXC_PCR_DSE_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC3_FLEXSPI0_A_DATA5, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC3_FLEXSPI0_A_DATA5,
                        IOMUXC_PCR_DSE_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC4_FLEXSPI0_A_DATA4, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC4_FLEXSPI0_A_DATA4,
                        IOMUXC_PCR_DSE_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC5_FLEXSPI0_A_SS0_B, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC5_FLEXSPI0_A_SS0_B,
                        IOMUXC_PCR_DSE_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC6_FLEXSPI0_A_SCLK, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC6_FLEXSPI0_A_SCLK,
                        IOMUXC_PCR_DSE_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC7_FLEXSPI0_A_DATA3, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC7_FLEXSPI0_A_DATA3,
                        IOMUXC_PCR_DSE_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC8_FLEXSPI0_A_DATA2, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC8_FLEXSPI0_A_DATA2,
                        IOMUXC_PCR_DSE_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC9_FLEXSPI0_A_DATA1, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC9_FLEXSPI0_A_DATA1,
                        IOMUXC_PCR_DSE_MASK);
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
