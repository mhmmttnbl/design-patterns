/**
 * @file oop/structural/facade/c/facade.c
 * @author TONBUL, Muhammet
 */

#include <stdlib.h>

#include "facade.h"
#include "system_x.h"
#include "system_y.h"

static void 
Facade_operation_x(struct Facade *__this)
{ __this->_M_x->operation(); }

static void 
Facade_operation_y(struct Facade *__this)
{ __this->_M_y->operation(); }

static void
Facade_ctor(struct Facade *__this)
{
  __this->operation_x = Facade_operation_x;
  __this->operation_y = Facade_operation_y;
  __this->_M_x = System_x_init();
  __this->_M_y = System_y_init();
}

void* 
Facade_init()
{
  struct Facade *__this = malloc(sizeof(*__this));

  Facade_ctor(__this);

  return(__this);
}