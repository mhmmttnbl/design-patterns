/**
 * @file oop/structural/bridge/c/implementor_y.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>
#include <stdlib.h>

#include "implementor_y.h"

static void
Implementor_y_operation()
{ printf("Operation by Implementor_y\n"); }

static void
Implementor_y_ctor(struct Implementor_y *__this)
{
  /* Casting to base class methods is not required. */
  static struct Implementor_vt __vt = {
    .operation = Implementor_y_operation
  };

  __this->_M_base._M_vt = &__vt;
}

void* 
Implementor_y_init()
{
  struct Implementor_y *__this = malloc(sizeof(*__this));

  Implementor_y_ctor(__this);

  return(__this);
}