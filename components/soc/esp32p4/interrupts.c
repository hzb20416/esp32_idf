/*
 * SPDX-FileCopyrightText: 2022-2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "soc/interrupts.h"

const char *const esp_isr_names[] = {
    [0] = "LP_RTC",
    [1] = "LP_WDT",
    [2] = "LP_TIMER0",
    [3] = "LP_TIMER1",
    [4] = "MB_HP",
    [5] = "MB_LP",
    [6] = "PMU0",
    [7] = "PMU1",
    [8] = "LP_ANA",
    [9] = "LP_ADC",
    [10] = "LP_GPIO",
    [11] = "LP_I2C",
    [12] = "LP_I2S",
    [13] = "LP_SPI",
    [14] = "LP_TOUCH",
    [15] = "LP_TSENS",
    [16] = "LP_UART",
    [17] = "LP_EFUSE",
    [18] = "LP_SW",
    [19] = "LP_SYSREG",
    [20] = "LP_HUK",
    [21] = "SYS_ICM",
    [22] = "USB_DEVICE",
    [23] = "SDIO_HOST",
    [24] = "GDMA",
    [25] = "GPSPI2",
    [26] = "GPSPI3",
    [27] = "I2S0",
    [28] = "I2S1",
    [29] = "I2S2",
    [30] = "UHCI0",
    [31] = "UART0",
    [32] = "UART1",
    [33] = "UART2",
    [34] = "UART3",
    [35] = "UART4",
    [36] = "LCD_CAM",
    [37] = "ADC",
    [38] = "PWM0",
    [39] = "PWM1",
    [40] = "CAN0",
    [41] = "CAN1",
    [42] = "CAN2",
    [43] = "RMT",
    [44] = "I2C0",
    [45] = "I2C1",
    [46] = "TG0_T0",
    [47] = "TG0_T1",
    [48] = "TG0_WDT",
    [49] = "TG1_T0",
    [50] = "TG1_T1",
    [51] = "TG1_WDT",
    [52] = "LEDC",
    [53] = "SYSTIMER_TARGET0",
    [54] = "SYSTIMER_TARGET1",
    [55] = "SYSTIMER_TARGET2",
    [56] = "AHB_PDMA_IN_CH0",
    [57] = "AHB_PDMA_IN_CH1",
    [58] = "AHB_PDMA_IN_CH2",
    [59] = "AHB_PDMA_OUT_CH0",
    [60] = "AHB_PDMA_OUT_CH1",
    [61] = "AHB_PDMA_OUT_CH2",
    [62] = "AXI_PDMA_IN_CH0",
    [63] = "AXI_PDMA_IN_CH1",
    [64] = "AXI_PDMA_IN_CH2",
    [65] = "AXI_PDMA_OUT_CH0",
    [66] = "AXI_PDMA_OUT_CH1",
    [67] = "AXI_PDMA_OUT_CH2",
    [68] = "RSA",
    [69] = "AES",
    [70] = "SHA",
    [71] = "ECC",
    [72] = "ECDSA",
    [73] = "KM",
    [74] = "GPIO_INT0",
    [75] = "GPIO_INT1",
    [76] = "GPIO_INT2",
    [77] = "GPIO_INT3",
    [78] = "GPIO_PAD_COMP",
    [79] = "CPU_INT_FROM_CPU_0",
    [80] = "CPU_INT_FROM_CPU_1",
    [81] = "CPU_INT_FROM_CPU_2",
    [82] = "CPU_INT_FROM_CPU_3",
    [83] = "CACHE",
    [84] = "FLASH_MSPI",
    [85] = "CSI_BRIDGE",
    [86] = "DSI_BRIDGE",
    [87] = "CSI",
    [88] = "DSI",
    [89] = "GMII_PHY",
    [90] = "LPI",
    [91] = "PMT",
    [92] = "SBD",
    [93] = "USB_OTG",
    [94] = "USB_OTG_ENDP_MULTI_PROC",
    [95] = "JPEG",
    [96] = "PPA",
    [97] = "CORE0_TRACE",
    [98] = "CORE1_TRACE",
    [99] = "HP_CORE",
    [100] = "ISP",
    [101] = "I3C",
    [102] = "I3C_SLV",
    [103] = "USB_OTG11",
    [104] = "DMA2D_IN_CH0",
    [105] = "DMA2D_IN_CH1",
    [106] = "DMA2D_OUT_CH0",
    [107] = "DMA2D_OUT_CH1",
    [108] = "DMA2D_OUT_CH2",
    [109] = "PSRAM_MSPI",
    [110] = "HP_SYSREG",
    [111] = "PCNT",
    [112] = "HP_PAU",
    [113] = "HP_PARLIO_RX",
    [114] = "HP_PARLIO_TX",
    [115] = "H264_DMA2D_OUT_CH0",
    [116] = "H264_DMA2D_OUT_CH1",
    [117] = "H264_DMA2D_OUT_CH2",
    [118] = "H264_DMA2D_OUT_CH3",
    [119] = "H264_DMA2D_OUT_CH4",
    [120] = "H264_DMA2D_IN_CH0",
    [121] = "H264_DMA2D_IN_CH1",
    [122] = "H264_DMA2D_IN_CH2",
    [123] = "H264_DMA2D_IN_CH3",
    [124] = "H264_DMA2D_IN_CH4",
    [125] = "H264_DMA2D_IN_CH5",
    [126] = "H264_REG",
    [127] = "ASSIST_DEBUG",
};
