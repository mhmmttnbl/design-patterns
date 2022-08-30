/**
 * @file oop/behavioral/state/c/context.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_STATE_CONTEXT__
#define __OOP_STATE_CONTEXT__

struct State;

struct Context
{
  void (*request)(struct Context *__this);
  void (*change)(struct Context *__this, struct State *__obj);

  struct State *_M_obj;
};

void* Context_init(struct State *__obj);

#endif /* !__OOP_STATE_CONTEXT__ */