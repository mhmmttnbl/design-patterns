/**
 * @file oop/behavioral/observer/c/observer_x.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>
#include <stdlib.h>

#include "observer_x.h"
#include "subject.h"

static void
Observer_x_update(struct Subject *__obj)
{
  if (__obj)
    printf("Observer_x: Subject state-> %d\n", __obj->get(__obj));
}

static void
Observer_x_ctor(struct Observer_x *__this)
{
  /* Casting to base class methods is not required. */
  static struct Observer_vt __vt = {
    .update = Observer_x_update
  };

  __this->_M_base._M_vt = &__vt;
}

void*
Observer_x_init()
{
  struct Observer_x *__this = malloc(sizeof(*__this));

  Observer_x_ctor(__this);

  return(__this);
}