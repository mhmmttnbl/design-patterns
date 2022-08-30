/**
 * @file oop/behavioral/strategy/cpp/strategy_y.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_STRATEGY_Y__
#define __OOP_STRATEGY_Y__

#include "strategy.h"

class _Strategy_y_impl;
class Strategy_y
  : public Strategy
{
public:
  Strategy_y();
public:
  void
  algorithm() override;
private:
  _Strategy_y_impl *_M_impl;
};

#endif /* !__OOP_STRATEGY_Y__ */