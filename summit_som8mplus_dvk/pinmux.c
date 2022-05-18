/*
 * Copyright (c) 2022, Laird Connectivity
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <init.h>
#include <fsl_common.h>
#include <fsl_iomuxc.h>

static int summit_som8mplus_dvk_pinmux_init(const struct device *dev)
{
	ARG_UNUSED(dev);

#if DT_NODE_HAS_STATUS(DT_NODELABEL(i2c1), okay)
    IOMUXC_SetPinMux(IOMUXC_I2C1_SCL_I2C1_SCL, 1U);
    IOMUXC_SetPinConfig(IOMUXC_I2C1_SCL_I2C1_SCL,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_FSEL_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);
    IOMUXC_SetPinMux(IOMUXC_I2C1_SDA_I2C1_SDA, 1U);
    IOMUXC_SetPinConfig(IOMUXC_I2C1_SDA_I2C1_SDA,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_FSEL_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);
#endif

#if DT_NODE_HAS_STATUS(DT_NODELABEL(i2c2), okay)
    IOMUXC_SetPinMux(IOMUXC_I2C2_SCL_I2C2_SCL, 1U);
    IOMUXC_SetPinConfig(IOMUXC_I2C2_SCL_I2C2_SCL,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_FSEL_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);
    IOMUXC_SetPinMux(IOMUXC_I2C2_SDA_I2C2_SDA, 1U);
    IOMUXC_SetPinConfig(IOMUXC_I2C2_SDA_I2C2_SDA,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_FSEL_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);
#endif

#if DT_NODE_HAS_STATUS(DT_NODELABEL(i2c3), okay)
    IOMUXC_SetPinMux(IOMUXC_I2C3_SCL_I2C3_SCL, 1U);
    IOMUXC_SetPinConfig(IOMUXC_I2C3_SCL_I2C3_SCL,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_FSEL_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);
    IOMUXC_SetPinMux(IOMUXC_I2C3_SDA_I2C3_SDA, 1U);
    IOMUXC_SetPinConfig(IOMUXC_I2C3_SDA_I2C3_SDA,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_FSEL_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);
#endif

#if DT_NODE_HAS_STATUS(DT_NODELABEL(i2c6), okay)
    IOMUXC_SetPinMux(IOMUXC_SAI5_RXFS_I2C6_SCL, 1U);
    IOMUXC_SetPinConfig(IOMUXC_SAI5_RXFS_I2C6_SCL,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_FSEL_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);
    IOMUXC_SetPinMux(IOMUXC_SAI5_RXC_I2C6_SDA, 1U);
    IOMUXC_SetPinConfig(IOMUXC_SAI5_RXC_I2C6_SDA,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_FSEL_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);
#endif

#if DT_NODE_HAS_STATUS(DT_NODELABEL(gpio3), okay)
    IOMUXC_SetPinMux(IOMUXC_SAI5_RXD1_GPIO3_IO22, 0U);
    IOMUXC_SetPinConfig(IOMUXC_SAI5_RXD1_GPIO3_IO22,
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);
    IOMUXC_SetPinMux(IOMUXC_SAI5_RXD2_GPIO3_IO23, 0U);
    IOMUXC_SetPinConfig(IOMUXC_SAI5_RXD2_GPIO3_IO23,
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);
#endif

#if DT_NODE_HAS_STATUS(DT_NODELABEL(uart4), okay)
	IOMUXC_SetPinMux(IOMUXC_UART4_RXD_UART4_RX, 0U);
	IOMUXC_SetPinConfig(IOMUXC_UART4_RXD_UART4_RX,
						IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
						IOMUXC_SW_PAD_CTL_PAD_PE_MASK);
	IOMUXC_SetPinMux(IOMUXC_UART4_TXD_UART4_TX, 0U);
	IOMUXC_SetPinConfig(IOMUXC_UART4_TXD_UART4_TX,
						IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
						IOMUXC_SW_PAD_CTL_PAD_PE_MASK);
#endif

#if DT_NODE_HAS_STATUS(DT_NODELABEL(flexspi), okay) && CONFIG_MEMC_MCUX_FLEXSPI
	/* Force input on all FLEXSPI pads */
	IOMUXC_SetPinMux(IOMUXC_NAND_DQS_FLEXSPI_A_DQS, 1U);
	IOMUXC_SetPinMux(IOMUXC_NAND_CE0_B_FLEXSPI_A_SS0_B, 1U);
	IOMUXC_SetPinMux(IOMUXC_NAND_ALE_FLEXSPI_A_SCLK, 1U);
	IOMUXC_SetPinMux(IOMUXC_NAND_DATA00_FLEXSPI_A_DATA0, 1U);
	IOMUXC_SetPinMux(IOMUXC_NAND_DATA01_FLEXSPI_A_DATA1, 1U);
	IOMUXC_SetPinMux(IOMUXC_NAND_DATA02_FLEXSPI_A_DATA2, 1U);
	IOMUXC_SetPinMux(IOMUXC_NAND_DATA03_FLEXSPI_A_DATA3, 1U);
	/* Pull down enabled, normal drive strength */
	IOMUXC_SetPinConfig(IOMUXC_NAND_DQS_FLEXSPI_A_DQS, 0x0AU);
	IOMUXC_SetPinConfig(IOMUXC_NAND_CE0_B_FLEXSPI_A_SS0_B, 0x0AU);
	IOMUXC_SetPinConfig(IOMUXC_NAND_ALE_FLEXSPI_A_SCLK, 0x0AU);
	IOMUXC_SetPinConfig(IOMUXC_NAND_DATA00_FLEXSPI_A_DATA0, 0x0AU);
	IOMUXC_SetPinConfig(IOMUXC_NAND_DATA01_FLEXSPI_A_DATA1, 0x0AU);
	IOMUXC_SetPinConfig(IOMUXC_NAND_DATA02_FLEXSPI_A_DATA2, 0x0AU);
	IOMUXC_SetPinConfig(IOMUXC_NAND_DATA03_FLEXSPI_A_DATA3, 0x0AU);
#endif

#if DT_NODE_HAS_STATUS(DT_NODELABEL(ecspi1), okay) && CONFIG_SPI_MCUX_ECSPI
    IOMUXC_SetPinMux(IOMUXC_ECSPI1_MISO_ECSPI1_MISO, 0U);
    IOMUXC_SetPinConfig(IOMUXC_ECSPI1_MISO_ECSPI1_MISO,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK);
    IOMUXC_SetPinMux(IOMUXC_ECSPI1_MOSI_ECSPI1_MOSI, 0U);
    IOMUXC_SetPinConfig(IOMUXC_ECSPI1_MOSI_ECSPI1_MOSI,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK);
    IOMUXC_SetPinMux(IOMUXC_ECSPI1_SCLK_ECSPI1_SCLK, 0U);
    IOMUXC_SetPinConfig(IOMUXC_ECSPI1_SCLK_ECSPI1_SCLK,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK);
    IOMUXC_SetPinMux(IOMUXC_ECSPI1_SS0_ECSPI1_SS0, 0U);
    IOMUXC_SetPinConfig(IOMUXC_ECSPI1_SS0_ECSPI1_SS0,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK);
#endif

#if DT_NODE_HAS_STATUS(DT_NODELABEL(ecspi2), okay) && CONFIG_SPI_MCUX_ECSPI
    IOMUXC_SetPinMux(IOMUXC_ECSPI2_MISO_ECSPI2_MISO, 0U);
    IOMUXC_SetPinConfig(IOMUXC_ECSPI2_MISO_ECSPI2_MISO,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK);
    IOMUXC_SetPinMux(IOMUXC_ECSPI2_MOSI_ECSPI2_MOSI, 0U);
    IOMUXC_SetPinConfig(IOMUXC_ECSPI2_MOSI_ECSPI2_MOSI,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK);
    IOMUXC_SetPinMux(IOMUXC_ECSPI2_SCLK_ECSPI2_SCLK, 0U);
    IOMUXC_SetPinConfig(IOMUXC_ECSPI2_SCLK_ECSPI2_SCLK,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK);
    IOMUXC_SetPinMux(IOMUXC_ECSPI2_SS0_ECSPI2_SS0, 0U);
    IOMUXC_SetPinConfig(IOMUXC_ECSPI2_SS0_ECSPI2_SS0,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK);
#endif

#if DT_NODE_HAS_STATUS(DT_NODELABEL(ecspi3), okay) && CONFIG_SPI_MCUX_ECSPI
    IOMUXC_SetPinMux(IOMUXC_UART2_RXD_ECSPI3_MISO, 0U);
    IOMUXC_SetPinConfig(IOMUXC_UART2_RXD_ECSPI3_MISO,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK);
    IOMUXC_SetPinMux(IOMUXC_UART1_TXD_ECSPI3_MOSI, 0U);
    IOMUXC_SetPinConfig(IOMUXC_UART1_TXD_ECSPI3_MOSI,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK);
    IOMUXC_SetPinMux(IOMUXC_UART1_RXD_ECSPI3_SCLK, 0U);
    IOMUXC_SetPinConfig(IOMUXC_UART1_RXD_ECSPI3_SCLK,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK);
    IOMUXC_SetPinMux(IOMUXC_UART2_TXD_ECSPI3_SS0, 0U);
    IOMUXC_SetPinConfig(IOMUXC_UART2_TXD_ECSPI3_SS0,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK);
#endif

#if DT_NODE_HAS_STATUS(DT_NODELABEL(flexcan1), okay)
    IOMUXC_SetPinMux(IOMUXC_SPDIF_RX_CAN1_RX, 0U);
    IOMUXC_SetPinConfig(IOMUXC_SPDIF_RX_CAN1_RX,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(1U) |
                        IOMUXC_SW_PAD_CTL_PAD_FSEL_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);
    IOMUXC_SetPinMux(IOMUXC_SPDIF_TX_CAN1_TX, 0U);
    IOMUXC_SetPinConfig(IOMUXC_SPDIF_TX_CAN1_TX,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(1U) |
                        IOMUXC_SW_PAD_CTL_PAD_FSEL_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);
#endif

#if DT_NODE_HAS_STATUS(DT_NODELABEL(flexcan2), okay)
    IOMUXC_SetPinMux(IOMUXC_SAI5_MCLK_CAN2_RX, 0U);
    IOMUXC_SetPinConfig(IOMUXC_SAI5_MCLK_CAN2_RX,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(1U) |
                        IOMUXC_SW_PAD_CTL_PAD_FSEL_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);
    IOMUXC_SetPinMux(IOMUXC_SAI5_RXD3_CAN2_TX, 0U);
    IOMUXC_SetPinConfig(IOMUXC_SAI5_RXD3_CAN2_TX,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(1U) |
                        IOMUXC_SW_PAD_CTL_PAD_FSEL_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);
#endif

#if DT_NODE_HAS_STATUS(DT_NODELABEL(pwm2), okay) && defined(CONFIG_PWM)
#ifdef PWM_BACKLIGHT_PIN_IO9
    IOMUXC_SetPinMux(IOMUXC_GPIO1_IO09_PWM2_OUT, 0U);
    IOMUXC_SetPinConfig(IOMUXC_GPIO1_IO09_PWM2_OUT,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);
#else
    IOMUXC_SetPinMux(IOMUXC_GPIO1_IO11_PWM2_OUT, 0U);
    IOMUXC_SetPinConfig(IOMUXC_GPIO1_IO11_PWM2_OUT,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);
#endif
#endif

	return 0;

}

SYS_INIT(summit_som8mplus_dvk_pinmux_init, PRE_KERNEL_1, 0);

#if DT_NODE_HAS_STATUS(DT_NODELABEL(i2c3), okay) && defined(CONFIG_GPIO_PCA95XX)
static int summit_som8mplus_dvk_pca6416_startup_delay(const struct device *dev)
{
    ARG_UNUSED(dev);

    /*
     * The PCA6416 IO expander on the I2C3 bus requires a small startup delay to
     * initialize properly.
     */
    k_sleep(K_MSEC(100));

    return 0;
}

SYS_INIT(summit_som8mplus_dvk_pca6416_startup_delay, APPLICATION, 0);
#endif