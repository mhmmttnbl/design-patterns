/**
 * @file oop/structural/bridge/c/implementor_y.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_BRIDGE_IMPLEMENTOR_Y__
#define __OOP_BRIDGE_IMPLEMENTOR_Y__

#include "implementor.h"

struct Implementor_y
{
  struct Implementor _M_base;
};

void* Implementor_y_init();

#endif /* !__OOP_BRIDGE_IMPLEMENTOR_Y__*/