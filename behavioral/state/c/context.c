/**
 * @file oop/behavioral/state/c/context.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>
#include <stdlib.h>

#include "context.h"
#include "state.h"

static void
Context_request(struct Context *__this)
{ State_handle(__this->_M_obj, __this); }

static void
Context_change(struct Context *__this, struct State *__obj)
{ __this->_M_obj = __obj; }

static void
Context_ctor(struct Context *__this, struct State *__obj)
{
  __this->request = Context_request;
  __this->change = Context_change;
  __this->_M_obj = __obj;
}

void*
Context_init(struct State *__obj)
{
  struct Context *__this = malloc(sizeof(*__this));

  Context_ctor(__this, __obj);

  return(__this);
}