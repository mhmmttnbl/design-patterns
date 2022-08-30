/**
 * @file oop/behavioral/visitor/c/visitor_x.c
 * @author TONBUL, Muhammet
 */

#include <stdlib.h>

#include "visitor_x.h"
#include "element.h"

static void
Visitor_x_visit_x(struct Element *__obj)
{ Element_operation_x(__obj); }

static void
Visitor_x_visit_y(struct Element *__obj)
{ Element_operation_y(__obj); }

static void
Visitor_x_ctor(struct Visitor_x *__this)
{
  static struct Visitor_vt __vt = {
    .visit_x = Visitor_x_visit_x,
    .visit_y = Visitor_x_visit_y
  };

  __this->_M_base._M_vt = &__vt;
}

void*
Visitor_x_init()
{
  struct Visitor_x *__this = malloc(sizeof(*__this));

  Visitor_x_ctor(__this);

  return(__this);
}