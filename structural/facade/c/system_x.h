/**
 * @file oop/structural/facade/c/system_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_FACADE_SYSTEM_X__
#define __OOP_FACADE_SYSTEM_X__

struct System_x
{
  void (*operation)();
};

void* System_x_init();

#endif /* !__OOP_FACADE_SYSTEM_X__ */