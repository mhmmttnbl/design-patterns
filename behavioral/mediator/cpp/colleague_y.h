/**
 * @file oop/behavioral/mediator/cpp/colleague_y.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_MEDIATOR_COLLEAGUE_Y__
#define __OOP_MEDIATOR_COLLEAGUE_Y__

#include "colleague.h"

class _Colleague_y_impl;
class Colleague_y
  : public Colleague
{
public:
  Colleague_y(Mediator *__obj);
public:
  void
  send(const char *__x) override;

  void
  receive(const char *__x) override;
private:
  _Colleague_y_impl *_M_impl;
};

#endif /* !__OOP_MEDIATOR_COLLEAGUE_Y__ */