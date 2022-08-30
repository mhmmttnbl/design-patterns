/**
 * @file oop/behavioral/strategy/c/context.c
 * @author TONBUL, Muhammet
 */

#include <stdlib.h>

#include "context.h"
#include "strategy.h"

static void
Context_operation(struct Context *__this)
{ Strategy_algorithm(__this->_M_obj); }

static void
Context_ctor(struct Context *__this, 
             struct Strategy *__obj)
{
  __this->operation = Context_operation;
  __this->_M_obj = __obj;
}

void* 
Context_init(struct Strategy *__obj)
{
  struct Context *__this = malloc(sizeof(*__this));

  Context_ctor(__this, __obj);

  return(__this);
}