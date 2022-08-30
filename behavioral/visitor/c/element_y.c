/**
 * @file oop/behavioral/visitor/c/element_y.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>
#include <stdlib.h>

#include "element_y.h"
#include "visitor.h"

static void
Element_y_accept(struct Element_y *__this, struct Visitor *__obj)
{ Visitor_visit_y(__obj, __this); }

static void
Element_y_operation_y()
{ printf("Operation_y by Element_y\n"); }

static void
Element_y_ctor(struct Element_y *__this)
{
  /* Aliases for base method signatures. */
  typedef void (*__Base_accept)(struct Element*, struct Visitor*);

  /* Casting is required to match base class method signatures. */
  static struct Element_vt __vt = {
    .accept = (__Base_accept)Element_y_accept,
    .operation_x = 0,
    .operation_y = Element_y_operation_y
  };

  __this->_M_base._M_vt = &__vt;
}

void*
Element_y_init()
{
  struct Element_y *__this = malloc(sizeof(*__this));

  Element_y_ctor(__this);

  return(__this);
}