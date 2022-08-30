/**
 * @file oop/structural/flyweight/c/flyweight.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_FLYWEIGHT_BASE__
#define __OOP_FLYWEIGHT_BASE__

#include <stdio.h>

struct Flyweight_vt;
struct Flyweight
{
  const struct Flyweight_vt *_M_vt;
};

struct Flyweight_vt
{
  void (*operation)(struct Flyweight *__this);
};

static inline void
Flyweight_operation(struct Flyweight *__this)
{ __this->_M_vt->operation(__this); }

#endif /* !__OOP_FLYWEIGHT_BASE__ */