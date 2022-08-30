/**
 * @file oop/behavioral/state/cpp/state_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_STATE_X__
#define __OOP_STATE_X__

#include "state.h"

class _State_x_impl;
class State_x
  : public State
{
public:
  State_x();
public:
  void
  handle(Context *__obj) override;
private:
  _State_x_impl *_M_impl;
};

#endif /* !__OOP_STATE_X__ */