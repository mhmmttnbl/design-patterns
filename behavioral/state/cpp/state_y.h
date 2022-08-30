/**
 * @file oop/behavioral/state/cpp/state_y.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_STATE_Y__
#define __OOP_STATE_Y__

#include "state.h"

class _State_y_impl;
class State_y
  : public State
{
public:
  State_y();
public:
  void
  handle(Context *__obj) override;
private:
  _State_y_impl *_M_impl;
};

#endif /* !__OOP_STATE_Y__ */