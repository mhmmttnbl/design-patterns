/**
 * @file oop/behavioral/state/c/state_x.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>
#include <stdlib.h>

#include "state_x.h"
#include "state_y.h"
#include "context.h"

static void
State_x_handle(struct Context *__obj)
{
  printf("Handle by State_x\n");
  __obj->change(__obj, State_y_init());
}

static void
State_x_ctor(struct State_x *__this)
{
  /* Casting to base class methods is not required. */
  static struct State_vt __vt = {
    .handle = State_x_handle
  };

  __this->_M_base._M_vt = &__vt;
}

void*
State_x_init()
{
  struct State_x *__this = malloc(sizeof(*__this));

  State_x_ctor(__this);

  return(__this);
}