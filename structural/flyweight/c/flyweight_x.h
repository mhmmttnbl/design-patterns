/**
 * @file oop/structural/flyweight/c/flyweight_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_FLYWEIGHT_X__
#define __OOP_FLYWEIGHT_X__

#include "flyweight.h"

struct Flyweight_x
{
  struct Flyweight _M_base;
  char             _M_x;
};

void* Flyweight_x_init(char __x);

#endif /* !__OOP_FLYWEIGHT_X__ */