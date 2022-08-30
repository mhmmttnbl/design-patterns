/**
 * @file oop/behavioral/strategy/cpp/context.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_STRATEGY_CONTEXT__
#define __OOP_STRATEGY_CONTEXT__

class Strategy;

class _Context_impl;
class Context
{
public:
  Context(Strategy *__obj);
public: 
  void
  operation();
private:
  _Context_impl *_M_impl;
};

#endif /* !__OOP_STRATEGY_CONTEXT__ */