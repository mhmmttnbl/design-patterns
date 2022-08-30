/**
 * @file oop/behavioral/strategy/cpp/strategy.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_STRATEGY_BASE__
#define __OOP_STRATEGY_BASE__

class Strategy
{
public:
  virtual
  ~Strategy() = default;
public:
  virtual void
  algorithm() = 0;
};

#endif /* !__OOP_STRATEGY_BASE__ */