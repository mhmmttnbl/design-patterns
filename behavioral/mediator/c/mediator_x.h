/**
 * @file oop/behavioral/mediator/c/mediator_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_MEDIATOR_X__
#define __OOP_MEDIATOR_X__

#include "mediator.h"

struct Mediator_x
{
  struct Mediator _M_base;

  void (*subscribe)(struct Mediator_x *__this, 
                    struct Colleague *__obj);

  struct Colleague *_M_pool[128];
  int               _M_size;
};

void* Mediator_x_init();

#endif /* !__OOP_MEDIATOR_X__ */