/**
 * @file oop/behavioral/mediator/c/colleague_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_MEDIATOR_COLLEAGUE_X__
#define __OOP_MEDIATOR_COLLEAGUE_X__

#include "colleague.h"

struct Mediator;

struct Colleague_x
{
  struct Colleague _M_base;
  struct Mediator *_M_obj;
};

void* Colleague_x_init(struct Mediator *__obj);

#endif /* !__OOP_MEDIATOR_COLLEAGUE_X__ */