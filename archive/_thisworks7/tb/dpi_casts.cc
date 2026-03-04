#include <stdint.h>
#include <string.h>

extern "C" {

uint32_t real_to_f32(double r) {
    float f = (float)r;
    uint32_t u;
    memcpy(&u, &f, sizeof u);
    return u;
}

double f32_to_real(uint32_t u) {
    float f;
    memcpy(&f, &u, sizeof f);
    return (double)f;
}

} // extern "C"
