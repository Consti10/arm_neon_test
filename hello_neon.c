//
// Created by consti10 on 02.01.22.
//

#include <stdio.h>
#include <arm_neon.h>


uint32x4_t double_elements(uint32x4_t input)
{
    return(vaddq_u32(input, input));
}


/** \brief a hello program for testing NEON availability
 */

int main()
{
    printf("Hello\n");

    uint32x4_t input,res;

    res= double_elements(input);


    return 0;
}