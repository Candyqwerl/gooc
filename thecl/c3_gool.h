#ifndef C3_GOOL_H_
#define C3_GOOL_H_

#include <stddef.h>
#include <stdint.h>

typedef struct {
    uint16_t type;
    uint16_t frames;
    uint32_t interp;
    uint32_t number;
    uint32_t model;
    uint32_t eid;
} c3_anim_t;

typedef char c3_anim_size_check[sizeof(c3_anim_t) == 20 ? 1 : -1];
typedef char c3_anim_layout_check[
    offsetof(c3_anim_t, frames) == 2 && offsetof(c3_anim_t, interp) == 4 &&
    offsetof(c3_anim_t, number) == 8 && offsetof(c3_anim_t, model) == 12 &&
    offsetof(c3_anim_t, eid) == 16 ? 1 : -1];

#endif
