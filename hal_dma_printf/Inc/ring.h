#ifndef RING_H
#define RING_H

#include "main.h"

#define RING_SUCCESS 0
#define RING_FAIL 1
#define RING_BUF_SIZE 1024
struct ring_buf {
  uint8_t buf[RING_BUF_SIZE];
  uint16_t buf_size;
  uint16_t w_ptr, r_ptr;
  uint16_t overwrite_cnt;
};

void ring_init(struct ring_buf *ring);
int ring_getc(struct ring_buf *ring, uint8_t *c);
int ring_putc(struct ring_buf *ring, uint8_t c);
int ring_available(struct ring_buf *ring);

int ring_available_linear(struct ring_buf *ring);
uint16_t ring_get_w_ptr(struct ring_buf *ring);
uint16_t ring_get_r_ptr(struct ring_buf *ring);

void ring_forward_r_ptr(struct ring_buf *ring, int len);

void ring_debug(struct ring_buf *ring);

#endif
