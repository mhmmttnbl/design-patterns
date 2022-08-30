/**
 * @file oop/behavioral/state/c/state_y.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>
#include <stdlib.h>

#include "state_y.h"
#include "state_x.h"
#include "context.h"

static void
State_y_handle(struct Context *__obj)
{
  printf("Handle by State_y\n"); 
  __obj->change(__obj, State_x_init());
}

static void
State_y_ctor(struct State_y *__this)
{
  /* Casting to base class methods is not required. */
  static struct State_vt __vt = {
    .handle = State_y_handle
  };

  __this->_M_base._M_vt = &__vt;
}

void*
State_y_init()
{
  struct State_y *__this = malloc(sizeof(*__this));

  State_y_ctor(__this);

  return(__this);
}