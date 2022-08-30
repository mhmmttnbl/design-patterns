/**
 * @file oop/behavioral/mediator/cpp/mediator_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_MEDIATOR_X__
#define __OOP_MEDIATOR_X__

#include "mediator.h"

class _Mediator_x_impl;
class Mediator_x
  : public Mediator
{
public:
  Mediator_x();
public:
  void
  publish(const char *__x, Colleague *__obj) override;

  void
  subscribe(Colleague *__obj);
private:
  _Mediator_x_impl * _M_impl;
};

#endif /* !__OOP_MEDIATOR_X__ */