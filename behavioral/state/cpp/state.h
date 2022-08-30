/**
 * @file oop/behavioral/state/cpp/state.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_STATE_BASE__
#define __OOP_STATE_BASE__

class Context;

class State
{
public:
  virtual
  ~State() = default;
public:
  virtual void
  handle(Context *__obj) = 0;
};

#endif /* !__OOP_STATE_BASE__ */