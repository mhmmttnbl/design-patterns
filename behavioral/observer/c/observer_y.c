/**
 * @file oop/behavioral/observer/c/observer_y.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>
#include <stdlib.h>

#include "observer_y.h"
#include "subject.h"

static void
Observer_y_update(struct Subject *__obj)
{
  if (__obj)
    printf("Observer_y: Subject state-> %d\n", __obj->get(__obj));
}

static void
Observer_y_ctor(struct Observer_y *__this)
{
  /* Casting to base class methods is not required. */
  static struct Observer_vt __vt = {
    .update = Observer_y_update
  };

  __this->_M_base._M_vt = &__vt;
}

void*
Observer_y_init()
{
  struct Observer_y *__this = malloc(sizeof(*__this));

  Observer_y_ctor(__this);

  return(__this);
}