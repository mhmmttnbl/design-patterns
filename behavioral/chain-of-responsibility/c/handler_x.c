/**
 * @file oop/behavioral/chain-of-responsibility/c/handler_x.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>
#include <stdlib.h>

#include "handler_x.h"

static void
Handler_x_handle_request(struct Handler_x *__this, char __x)
{
  if (__x >= 'a' && __x <= 'h')
    printf("Handle by Handler_x\n");
  else
    Handler_handle_request(__this->_M_base._M_obj, __x);
}

static void
Handler_x_next(struct Handler_x *__this, struct Handler *__obj)
{ __this->_M_base._M_obj = __obj; }

static void
Handler_x_ctor(struct Handler_x *__this)
{
  /* Aliases for base method signatures. */
  typedef void (*__Base_handle_request)(struct Handler*, char);
  typedef void (*__Base_next)(struct Handler*, struct Handler*);

  /* Casting is required to match base class method signatures. */
  static struct Handler_vt __vt = {
    .handle_request = (__Base_handle_request)Handler_x_handle_request,
    .next = (__Base_next)Handler_x_next
  };

  __this->_M_base._M_vt = &__vt;
  __this->_M_base._M_obj = NULL;
}

void*
Handler_x_init()
{
  struct Handler_x *__this = malloc(sizeof(*__this));

  Handler_x_ctor(__this);

  return(__this);
}