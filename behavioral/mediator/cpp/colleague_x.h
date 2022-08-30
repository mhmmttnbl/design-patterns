/**
 * @file oop/behavioral/mediator/cpp/colleague_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_MEDIATOR_COLLEAGUE_X__
#define __OOP_MEDIATOR_COLLEAGUE_X__

#include "colleague.h"

class _Colleague_x_impl;
class Colleague_x
  : public Colleague
{
public:
  Colleague_x(Mediator *__obj);
public:
  void
  send(const char *__x) override;

  void
  receive(const char *__x) override;
private:
  _Colleague_x_impl *_M_impl;
};

#endif /* !__OOP_MEDIATOR_COLLEAGUE_X__ */