/**
 * @file oop/structural/composite/c/composite.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_COMPOSITE_BASE__
#define __OOP_COMPOSITE_BASE__

#include "component.h"

struct Composite
{
  struct Component  _M_base;
  struct Component *_M_pool[128];
  int               _M_size;

  void (*operation)(struct Component *__obj);
  void (*append)(struct Composite *__this, struct Component *__obj);
  void (*remove)(struct Composite *__this, struct Component *__obj);
};

void* Composite_init();

#endif /* !__OOP_COMPOSITE_BASE__ */