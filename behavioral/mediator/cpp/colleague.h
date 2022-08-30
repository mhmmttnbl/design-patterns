/**
 * @file oop/behavioral/mediator/cpp/colleague.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_MEDIATOR_COLLEAGUE__
#define __OOP_MEDIATOR_COLLEAGUE__

class Mediator;

class _Colleague_impl;
class Colleague
{ 
public:
  virtual
  ~Colleague() = default;
public:
  virtual void
  send(const char *__x) = 0;

  virtual void
  receive(const char *__x) = 0;
private:
  _Colleague_impl *_M_impl;
};

#endif /* !__OOP_MEDIATOR_COLLEAGUE__ */