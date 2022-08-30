/**
 * @file oop/structural/bridge/c/abstraction.c
 * @author TONBUL, Muhammet
 */

#include <stdlib.h>

#include "abstraction.h"
#include "implementor.h"

static void
Abstraction_operation(struct Abstraction *__this)
{ Implementor_operation(__this->_M_obj); }

static void
Abstraction_ctor(struct Abstraction *__this,
                 struct Implementor *__obj)
{
  __this->operation = Abstraction_operation;
  __this->_M_obj = __obj;
}

void*
Abstraction_init(struct Implementor *__obj)
{
  struct Abstraction *__this = malloc(sizeof(*__this));

  Abstraction_ctor(__this, __obj);

  return(__this);
}