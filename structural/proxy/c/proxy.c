/**
 * @file oop/structural/proxy/c/proxy.c
 * @author TONBUL, Muhammet
 */

#include <stdlib.h>

#include "proxy.h"

static void
Proxy_request()
{ Subject_request(Subject_x_init()); }

static void
Proxy_ctor(struct Proxy *__this)
{
  /* Casting to base class methods is not required. */
  static struct Subject_vt __vt = {
    .request = Proxy_request
  };

  __this->_M_base._M_vt = &__vt;
}

void*
Proxy_init()
{
  struct Proxy *__this = malloc(sizeof(*__this));

  Proxy_ctor(__this);

  return(__this);
}