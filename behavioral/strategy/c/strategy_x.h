/**
 * @file oop/behavioral/strategy/c/strategy_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_STRATEGY_X__
#define __OOP_STRATEGY_X__

#include "strategy.h"

struct Strategy_x
{
  struct Strategy _M_base;
};

void* Strategy_x_init();

#endif /* !__OOP_STRATEGY_X__ */