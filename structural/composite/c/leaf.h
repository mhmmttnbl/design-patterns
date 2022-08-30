/**
 * @file oop/structural/composite/c/leaf.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_COMPOSITE_LEAF__
#define __OOP_COMPOSITE_LEAF__

#include "component.h"

struct Leaf
{
  struct Component _M_base;
  const char      *_M_x;
};

void* Leaf_init(const char *__x);

#endif /* !__OOP_COMPOSITE_LEAF__ */