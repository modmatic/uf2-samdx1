#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define __SAMD51G19A__ 1

#define CRYSTALLESS    1

#define VENDOR_NAME "Modmatic, LLC"
#define PRODUCT_NAME "dotMG (SAMD51 Cart)"
#define VOLUME_LABEL "DOTMGBOOT"
#define INDEX_URL "https://modmatic.io"
#define BOARD_ID "dotMG-Cart-SAMD51-v0"

#define USB_VID 0x04D8
#define USB_PID 0xEC62

#define LED_PIN PIN_PA15

#define BOOT_USART_MODULE                 SERCOM0
#define BOOT_USART_MASK                   APBAMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBAMASK_SERCOM0
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD2_TX_PAD0
#define BOOT_USART_PAD3                   PINMUX_UNUSED
#define BOOT_USART_PAD2                   PINMUX_PA06D_SERCOM0_PAD2
#define BOOT_USART_PAD1                   PINMUX_UNUSED
#define BOOT_USART_PAD0                   PINMUX_PA04D_SERCOM0_PAD0
#define BOOT_GCLK_ID_CORE                 SERCOM0_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM0_GCLK_ID_SLOW

#endif
