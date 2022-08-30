/**
 * @file oop/behavioral/observer/c/observer_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_OBSERVER_X__
#define __OOP_OBSERVER_X__

#include "observer.h"

struct Observer_x
{
  struct Observer _M_base;
};

void* Observer_x_init();

#endif /* !__OOP_OBSERVER_X__ */