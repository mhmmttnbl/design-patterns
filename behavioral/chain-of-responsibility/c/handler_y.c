/**
 * @file oop/behavioral/chain-of-responsibility/c/handler_y.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>
#include <stdlib.h>

#include "handler_y.h"

static void
Handler_y_handle_request(struct Handler_y *__this, char __x)
{
  if (__x >= 'i' && __x <= 'z')
    printf("Handle by Handler_y\n");
  else
    Handler_handle_request(__this->_M_base._M_obj, __x);
}

static void
Handler_y_next(struct Handler_y *__this, struct Handler *__obj)
{ __this->_M_base._M_obj = __obj; }

static void
Handler_y_ctor(struct Handler_y *__this)
{
  /* Aliases for base method signatures. */
  typedef void (*__Base_handle_request)(struct Handler*, char);
  typedef void (*__Base_next)(struct Handler*, struct Handler*);

  /* Casting is required to match base class method signatures. */
  static struct Handler_vt __vt = {
    .handle_request = (__Base_handle_request)Handler_y_handle_request,
    .next = (__Base_next)Handler_y_next
  };

  __this->_M_base._M_vt = &__vt;
  __this->_M_base._M_obj = NULL;
}

void*
Handler_y_init()
{
  struct Handler_y *__this = malloc(sizeof(*__this));

  Handler_y_ctor(__this);

  return(__this);
}