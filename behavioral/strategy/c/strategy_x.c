/**
 * @file oop/behavioral/strategy/c/strategy_x.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>
#include <stdlib.h>

#include "strategy_x.h"

static void
Strategy_x_algorithm()
{ printf("Algorithm by Strategy_x\n"); }

static void
Strategy_x_ctor(struct Strategy_x *__this)
{
  /* Casting to base class methods is not required. */
  static struct Strategy_vt __vt = {
    .algorithm = Strategy_x_algorithm
  };

  __this->_M_base._M_vt = &__vt;
}

void*
Strategy_x_init()
{
  struct Strategy_x *__this = malloc(sizeof(*__this));

  Strategy_x_ctor(__this);

  return(__this);
}