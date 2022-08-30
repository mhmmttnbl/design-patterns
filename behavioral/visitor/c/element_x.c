/**
 * @file oop/behavioral/visitor/c/element_x.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>
#include <stdlib.h>

#include "element_x.h"
#include "visitor.h"

static void
Element_x_accept(struct Element_x *__this, struct Visitor *__obj)
{ Visitor_visit_x(__obj, __this); }

static void
Element_x_operation_x()
{ printf("Operation_x by Element_x\n"); }

static void
Element_x_ctor(struct Element_x *__this)
{
  /* Aliases for base method signatures. */
  typedef void (*__Base_accept)(struct Element*, struct Visitor*);

  /* Casting is required to match base class method signatures. */
  static struct Element_vt __vt = {
    .accept = (__Base_accept)Element_x_accept,
    .operation_x = Element_x_operation_x,
    .operation_y = 0
  };

  __this->_M_base._M_vt = &__vt;
}

void*
Element_x_init()
{
  struct Element_x *__this = malloc(sizeof(*__this));

  Element_x_ctor(__this);

  return(__this);
}