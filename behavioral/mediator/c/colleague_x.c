/**
 * @file oop/behavioral/mediator/c/colleague_x.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>
#include <stdlib.h>

#include "colleague_x.h"
#include "mediator.h"

static void
Colleague_x_send(struct Colleague_x *__this, const char *__x)
{ Mediator_publish(__this->_M_obj, __x, __this); }

static void
Colleague_x_receive(const char *__x)
{ printf("%s is received by Colleague_x\n", __x); }

static void
Colleague_x_ctor(struct Colleague_x *__this, struct Mediator *__obj)
{
  /* Aliases for base method signatures. */
  typedef void (*__Base_send)(struct Colleague*, const char*);
  typedef void (*__Base_receive)(const char*);

  /* Casting is required to match base class method signatures. */
  static struct Colleague_vt __vt = {
    .send = (__Base_send)Colleague_x_send,
    .receive = (__Base_receive)Colleague_x_receive
  };

  __this->_M_base._M_vt = &__vt;
  __this->_M_obj = __obj;
}

void*
Colleague_x_init(struct Mediator *__obj)
{
  struct Colleague_x *__this = malloc(sizeof(*__this));

  Colleague_x_ctor(__this, __obj);

  return(__this);
}