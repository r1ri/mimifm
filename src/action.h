#ifndef __ACTION_H__
#define __ACTION_H__

#ifdef __cplusplus
extern "C" {
#endif
#include <stdio.h>
#include "types.h"

int toggleHidden(t_state * state);
int Search(t_state * state);
int enter(t_state * state);
int moveDown(t_state * state);
int moveUp(t_state * state);
int exitProgram(t_state * state);
void freeAction(t_action * action);
int gotoTop(t_state * state);
int gotoBottom(t_state * state);
int backDir(t_state * state);
int removeFile(t_state * state);
int yank(t_state * state);
int put(t_state * state);
int Visual(t_state * state);

#ifdef __cplusplus
}
#endif

#endif
