/**
 * @file oop/behavioral/strategy/c/context.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_STRATEGY_CONTEXT__
#define __OOP_STRATEGY_CONTEXT__

struct Strategy;

struct Context
{
  void (*operation)(struct Context *__this);

  struct Strategy *_M_obj;
};

void* Context_init(struct Strategy *__obj);

#endif /* !__OOP_STRATEGY_CONTEXT__ */