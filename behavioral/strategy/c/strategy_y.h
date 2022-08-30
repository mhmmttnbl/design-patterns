/**
 * @file oop/behavioral/strategy/c/strategy_y.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_STRATEGY_Y__
#define __OOP_STRATEGY_Y__

#include "strategy.h"

struct Strategy_y
{
  struct Strategy _M_base;
};

void* Strategy_y_init();

#endif /* !__OOP_STRATEGY_Y__ */