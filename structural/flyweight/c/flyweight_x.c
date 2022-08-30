/**
 * @file oop/structural/flyweight/c/flyweight_x.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>
#include <stdlib.h>

#include "flyweight_x.h"

static void
Flyweight_x_operation(struct Flyweight_x *__this)
{ printf("Flyweight_x-> %c\n", __this->_M_x); }

static void
Flyweight_x_ctor(struct Flyweight_x *__this,
                 char                __x)
{
  /* Aliases for base method signatures. */
  typedef void (*__Base_operation)(struct Flyweight *__this);

  /* Casting is required to match base class method signatures. */
  static struct Flyweight_vt __vt = {
    .operation = (__Base_operation)Flyweight_x_operation
  };

  __this->_M_base._M_vt = &__vt;
  __this->_M_x = __x;
}

void*
Flyweight_x_init(const char __x)
{
  struct Flyweight_x *__this = malloc(sizeof(*__this));

  Flyweight_x_ctor(__this, __x);

  return(__this);
}