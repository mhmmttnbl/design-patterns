/**
 * @file oop/behavioral/state/c/state_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_STATE_X__
#define __OOP_STATE_X__

#include "state.h"

struct State_x
{
  struct State _M_base;
};

void* State_x_init();

#endif /* !__OOP_STATE_X__ */