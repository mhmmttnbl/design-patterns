/**
 * @file oop/structural/adapter/c/adapter.c
 * @author TONBUL, Muhammet
 */

#include <stdlib.h>

#include "adapter.h"
#include "adaptee.h"

static void
Adapter_request()
{
  struct Adaptee *__adaptee = Adaptee_init();
  
  __adaptee->specific_request();
}

static void
Adapter_ctor(struct Adapter *__this)
{
  /* Casting to base class methods is not required. */
  static struct Target_vt __vt = {
    .request = Adapter_request
  };

  __this->_M_base._M_vt = &__vt;
}

void*
Adapter_init()
{
  struct Adapter *__this = malloc(sizeof(*__this));

  Adapter_ctor(__this);

  return(__this);
}