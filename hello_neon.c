//
// Created by consti10 on 02.01.22.
//

#include <stdio.h>
#include <arm_neon.h>
#include <stdint.h>

#include "gf256_neon.h"



uint32x4_t double_elements(uint32x4_t input)
{
    return(vaddq_u32(input, input));
}

void lookup(){
    uint8x8_t out_uint8x8_t;
    uint8x8_t arg0_uint8x8_t;
    uint8x8_t arg1_uint8x8_t;
    uint8x8_t arg2_uint8x8_t;

    out_uint8x8_t = vtbx1_u8 (arg0_uint8x8_t, arg1_uint8x8_t, arg2_uint8x8_t);
}


/** \brief a hello program for testing NEON availability
 */

int main()
{
    printf("Hello Neon\n");

    uint32x4_t input,res;

    res= double_elements(input);
    lookup();

    uint8_t region1[1024];
    uint8_t region2[1024];
    xorr_neon_128(region1,region2,1024);

    return 0;
}