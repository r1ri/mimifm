#ifndef __CORE_H__
#define __CORE_H__

#ifdef __cplusplus
extern "C" {
#endif
#include "types.h"

int enter(t_state * state);
void draw(t_state * state);
int input(t_state * state, struct actionNode * commands);
struct actionNode * initDefaultMappings();

#ifdef __cplusplus
}
#endif

#endif