/**
 * @file oop/behavioral/command/c/invoker.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_COMMAND_INVOKER__
#define __OOP_COMMAND_INVOKER__

struct Command;

struct Invoker
{
  void (*operation)(struct Invoker *__this);
  void (*append)(struct Invoker *__this, struct Command *__obj);
  void (*remove)(struct Invoker *__this, struct Command *__obj);

  struct Command *_M_pool[128];
  int             _M_size;
};

void* Invoker_init();

#endif /* !__OOP_COMMAND_INVOKER__ */