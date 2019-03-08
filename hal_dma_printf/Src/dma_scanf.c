//
// Created by naoki on 19/03/09.
//

#include "main.h"

struct dma_scanf_info dsi;

int dma_scanf_init(UART_HandleTypeDef *scanf_huart){
    dsi.huart = scanf_huart;
    ring_init(&dsi.rx_ring);
    HAL_UART_Receive_DMA(dsi.huart, dsi.rx_ring.buf, dsi.rx_ring.buf_size);
}

int dma_scanf_getc_blocking(){
    while(ring_available(&dsi.rx_ring) == 0){
        ring_set_w_ptr(&dsi.rx_ring, (uint16_t)((dsi.rx_ring.buf_size - dsi.huart->hdmarx->Instance->CNDTR)&0xFFFF));
    }
    char c;
    ring_getc(&dsi.rx_ring, &c);
    return c;
}