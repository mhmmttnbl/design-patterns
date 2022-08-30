/**
 * @file oop/structural/bridge/c/implementor_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_BRIDGE_IMPLEMENTOR_X__
#define __OOP_BRIDGE_IMPLEMENTOR_X__

#include "implementor.h"

struct Implementor_x
{
  struct Implementor _M_base;
};

void* Implementor_x_init();

#endif /* !__OOP_BRIDGE_IMPLEMENTOR_X__*/