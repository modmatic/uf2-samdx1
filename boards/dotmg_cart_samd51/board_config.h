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

#define BOOT_USART_MODULE                 SERCOM1
#define BOOT_USART_MASK                   APBAMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBAMASK_SERCOM1
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD1_TX_PAD0
#define BOOT_USART_PAD3                   PINMUX_UNUSED
#define BOOT_USART_PAD2                   PINMUX_UNUSED
#define BOOT_USART_PAD1                   PINMUX_PA01D_SERCOM1_PAD1
#define BOOT_USART_PAD0                   PINMUX_PA00D_SERCOM1_PAD0
#define BOOT_GCLK_ID_CORE                 SERCOM1_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM1_GCLK_ID_SLOW

#endif
