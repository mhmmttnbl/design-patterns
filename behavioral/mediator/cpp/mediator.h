/**
 * @file oop/behavioral/mediator/cpp/mediator.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_MEDIATOR_BASE__
#define __OOP_MEDIATOR_BASE__

class Colleague;

class Mediator
{
public:
  virtual
  ~Mediator() = default;
public:
  virtual void
  publish(const char *__x, Colleague *__obj) = 0;
};

#endif /* !__OOP_MEDIATOR_BASE__ */