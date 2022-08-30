/**
 * @file oop/behavioral/mediator/c/mediator_x.c
 * @author TONBUL, Muhammet
 */

#include <stdlib.h>

#include "mediator_x.h"
#include "colleague.h"

static void
Mediator_x_publish(struct Mediator_x *__this, const char *__x, 
                   struct Colleague *__obj)
{
  for (int __i = 0; __i < __this->_M_size; ++__i) {
    if (__this->_M_pool[__i] != __obj)
      Colleague_receive(__this->_M_pool[__i], __x);
  }
}

static void
Mediator_x_subscribe(struct Mediator_x *__this,
                     struct Colleague *__obj)
{ __this->_M_pool[__this->_M_size++] = __obj; }

static void
Mediator_x_ctor(struct Mediator_x *__this)
{
  typedef void (*__Base_publish)(struct Mediator*, const char*, struct Colleague*);
  
  /* Casting is required to match base class method signatures. */
  static struct Mediator_vt __vt = {
    .publish = (__Base_publish)Mediator_x_publish
  };

  __this->_M_base._M_vt = &__vt;
  __this->subscribe = Mediator_x_subscribe;
  __this->_M_size = 0;
}

void*
Mediator_x_init()
{
  struct Mediator_x *__this = malloc(sizeof(*__this));

  Mediator_x_ctor(__this);

  return(__this);
}