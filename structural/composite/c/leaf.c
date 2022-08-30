/**
 * @file oop/structural/composite/c/leaf.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>
#include <stdlib.h>

#include "leaf.h"

static void
Leaf_operation(struct Leaf *__this)
{ printf("%s\n", __this->_M_x); }

static void
Leaf_ctor(struct Leaf *__this, const char *__x)
{
  /* Aliases for base method signatures. */
  typedef void (*__Base_operation)(struct Component *__this);

  /* Casting is required to match base class method signatures. */
  static struct Component_vt __vt = {
    .operation = (__Base_operation)Leaf_operation
  };

  __this->_M_base._M_vt = &__vt;
  __this->_M_x = __x;
}

void*
Leaf_init(const char *__x)
{
  struct Leaf *__this = malloc(sizeof(*__this));

  Leaf_ctor(__this, __x);

  return(__this);
}