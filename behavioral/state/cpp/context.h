/**
 * @file oop/behavioral/state/cpp/context.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_STATE_CONTEXT__
#define __OOP_STATE_CONTEXT__

class State;

class _Context_impl;
class Context
{
public:
  Context(State *__obj);
public:
  void
  request();

  void
  change(State *__obj);
private:
  _Context_impl *_M_impl;
};

#endif /* !__OOP_STATE_CONTEXT__ */