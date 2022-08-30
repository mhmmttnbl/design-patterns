/**
 * @file oop/behavioral/strategy/cpp/strategy_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_STRATEGY_X__
#define __OOP_STRATEGY_X__

#include "strategy.h"

class _Strategy_x_impl;
class Strategy_x
  : public Strategy
{
public:
  Strategy_x();
public:
  void
  algorithm() override;
private:
  _Strategy_x_impl *_M_impl;
};

#endif /* !__OOP_STRATEGY_X__ */