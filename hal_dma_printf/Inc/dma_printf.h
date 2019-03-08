//
// Created by naoki on 19/03/09.
//

#ifndef HAL_DMA_PRINTF_DMA_PRINTF_H
#define HAL_DMA_PRINTF_DMA_PRINTF_H
#include "main.h"

struct dma_printf_info {
    struct ring_buf tx_ring;
    int sending;
    UART_HandleTypeDef *huart;
    int previous_send_len;
};

int dma_printf_init(UART_HandleTypeDef *printf_huart);
int dma_printf_putc(uint8_t c);
void dma_printf_send_it(UART_HandleTypeDef *printf_huart);
#endif //HAL_DMA_PRINTF_DMA_PRINTF_H
