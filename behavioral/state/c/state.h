/**
 * @file oop/behavioral/state/c/state.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_STATE_BASE__
#define __OOP_STATE_BASE__

struct Context;

struct State_vt;
struct State
{
  const struct State_vt *_M_vt;
};

struct State_vt
{
  void (*handle)(struct Context *__obj);
};

static inline void
State_handle(struct State *__this, struct Context *__obj)
{ __this->_M_vt->handle(__obj); }

#endif /* !__OOP_STATE_BASE__ */