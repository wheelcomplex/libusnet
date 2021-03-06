#ifndef USNET_ORDER32_H
#define USNET_ORDER32_H

#include <limits.h>
#include <stdint.h>

#if CHAR_BIT != 8
#error "unsupported char size"
#endif

enum
{
    O32_LITTLE_ENDIAN = 0x03020100ul,
    O32_BIG_ENDIAN = 0x00010203ul,
    O32_PDP_ENDIAN = 0x01000302ul
};

typedef union usn_order usn_order_t;
union usn_order {
   unsigned char bytes[4]; 
   uint32_t value; 
};

extern usn_order_t o32_host_order;// = { { 0, 1, 2, 3 } };

#define O32_HOST_ORDER (o32_host_order.value)

#endif
