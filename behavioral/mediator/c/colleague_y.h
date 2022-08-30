/**
 * @file oop/behavioral/mediator/c/colleague_y.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_MEDIATOR_COLLEAGUE_Y__
#define __OOP_MEDIATOR_COLLEAGUE_Y__

#include "colleague.h"

struct Mediator;

struct Colleague_y
{
  struct Colleague _M_base;
  struct Mediator *_M_obj;
};

void* Colleague_y_init(struct Mediator *__obj);

#endif /* !__OOP_MEDIATOR_COLLEAGUE_Y__ */