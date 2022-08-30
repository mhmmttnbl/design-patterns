/**
 * @file oop/structural/flyweight/c/flyweight_factory.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_FLYWEIGHT_FACTORY__
#define __OOP_FLYWEIGHT_FACTORY__

#include "flyweight.h"

struct Flyweight_factory
{
  struct Flyweight* (*get)(struct Flyweight_factory *__this, char __x);
  
  struct Flyweight *_M_pool[128];
};

void* Flyweight_factory_init();

#endif /* !__OOP_FLYWEIGHT_FACTORY__ */