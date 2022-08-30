/**
 * @file oop/structural/bridge/c/abstraction.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_BRIDGE_ABSTRACTION__
#define __OOP_BRIDGE_ABSTRACTION__

struct Implementor;

struct Abstraction
{
  void (*operation)(struct Abstraction *__this);

  struct Implementor *_M_obj;
};

void* Abstraction_init(struct Implementor *__obj);

#endif /* !__OOP_BRIDGE_ABSTRACTION__ */