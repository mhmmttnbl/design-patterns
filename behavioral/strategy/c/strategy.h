/**
 * @file oop/behavioral/strategy/c/strategy.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_STRATEGY_BASE__
#define __OOP_STRATEGY_BASE__

struct Strategy_vt;
struct Strategy
{
  const struct Strategy_vt *_M_vt;
};

struct Strategy_vt
{
  void (*algorithm)();
};

static inline void
Strategy_algorithm(struct Strategy *__this)
{ __this->_M_vt->algorithm(); }

#endif /* !__OOP_STRATEGY_BASE__ */