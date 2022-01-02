//
// Created by consti10 on 02.01.22.
//

void
xorr_neon_64(uint8_t *region1, const uint8_t *region2, size_t length)
{
    uint8_t *end;
    register uint64x1_t in, out;

    for (end=region1+length; region1<end; region1+=8, region2+=8) {
        in  = vld1_u64((void *)region2);
        out = vld1_u64((void *)region1);
        out = veor_u64(in, out);
        vst1_u64((void *)region1, out);
    }
}

void
xorr_neon_128(uint8_t *region1, const uint8_t *region2, size_t length)
{
    uint8_t *end;
    register uint64x2_t in, out;

    for (end=region1+length; region1<end; region1+=16, region2+=16) {
        in  = vld1q_u64((void *)region2);
        out = vld1q_u64((void *)region1);
        out = veorq_u64(in, out);
        vst1q_u64((void *)region1, out);
    }
}