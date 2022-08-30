/**
 * @file oop/structural/bridge/c/implementor_x.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>
#include <stdlib.h>

#include "implementor_x.h"

static void
Implementor_x_operation()
{ printf("Operation by Implementor_x\n"); }

static void
Implementor_x_ctor(struct Implementor_x *__this)
{
  /* Casting to base class methods is not required. */
  static struct Implementor_vt __vt = {
    .operation = Implementor_x_operation
  };

  __this->_M_base._M_vt = &__vt;
}

void* 
Implementor_x_init()
{
  struct Implementor_x *__this = malloc(sizeof(*__this));

  Implementor_x_ctor(__this);

  return(__this);
}