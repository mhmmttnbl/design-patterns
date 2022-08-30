/**
 * @file oop/structural/facade/c/facade.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_FACADE_BASE__
#define __OOP_FACADE_BASE__

struct System_x;
struct System_y;

struct Facade
{
  void (*operation_x)(struct Facade *__this);
  void (*operation_y)(struct Facade *__this);

  struct System_x *_M_x;
  struct System_y *_M_y;
};

void* Facade_init();

#endif /* !__OOP_FACADE_BASE__ */