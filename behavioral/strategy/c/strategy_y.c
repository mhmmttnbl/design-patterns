/**
 * @file oop/behavioral/strategy/c/strategy_y.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>
#include <stdlib.h>

#include "strategy_y.h"

static void
Strategy_y_algorithm()
{ printf("Algorithm by Strategy_y\n"); }

static void
Strategy_y_ctor(struct Strategy_y *__this)
{
  /* Casting to base class methods is not required. */
  static struct Strategy_vt __vt = {
    .algorithm = Strategy_y_algorithm
  };

  __this->_M_base._M_vt = &__vt;
}

void*
Strategy_y_init()
{
  struct Strategy_y *__this = malloc(sizeof(*__this));

  Strategy_y_ctor(__this);

  return(__this);
}