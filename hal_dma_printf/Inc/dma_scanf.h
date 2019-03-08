//
// Created by naoki on 19/03/09.
//

#ifndef HAL_DMA_PRINTF_DMA_SCANF_H
#define HAL_DMA_PRINTF_DMA_SCANF_H
#include "main.h"

struct dma_scanf_info {
    struct ring_buf rx_ring;
    UART_HandleTypeDef *huart;
};

int dma_scanf_init(UART_HandleTypeDef *scanf_huart);
int dma_scanf_getc_blocking();

#endif //HAL_DMA_PRINTF_DMA_SCANF_H
