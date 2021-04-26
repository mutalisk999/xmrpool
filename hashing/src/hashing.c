#include "crypto/hash-ops.h"

void cryptonight_hash(const char* input, char* output, uint32_t len, uint64_t height) {
    const int variant = input[0] >= 7 ? input[0] - 6 : 0;
    cn_slow_hash(input, len, output, variant, 0, height);
}

void cryptonight_fast_hash(const char* input, char* output, uint32_t len) {
    cn_fast_hash(input, len, output);
}

void randomx_slow_hash(const uint64_t mainheight, const uint64_t seedheight,
    const char *seedhash, const void *data, size_t length,
    char *hash, int miners, int is_alt) {
    rx_slow_hash(mainheight, seedheight, seedhash, data, length, hash, miners, is_alt);
}