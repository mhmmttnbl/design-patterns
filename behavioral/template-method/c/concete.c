/**
 * @file oop/behavioral/template-method/c/concrete.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>
#include <stdlib.h>

#include "concrete.h"

static void
Concrete_primitive_operation_x()
{ printf("Operation_x by Concrete\n"); }

static void
Concrete_primitive_operation_y()
{ printf("Operation_y by Concrete\n"); }

static void
Concrete_ctor(struct Concrete *__this)
{
  /* Casting to base class methods is not required. */
  static struct Abstract_vt __vt = {
    .primitive_operation_x = Concrete_primitive_operation_x,
    .primitive_operation_y = Concrete_primitive_operation_y
  };

  __this->_M_base = *(struct Abstract*)Abstract_init();
  __this->_M_base._M_vt = &__vt;
}

void*
Concrete_init()
{
  struct Concrete *__this = malloc(sizeof(*__this));

  Concrete_ctor(__this);

  return(__this);
}