/**
 * @file oop/structural/facade/c/system_y.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_FACADE_SYSTEM_Y__
#define __OOP_FACADE_SYSTEM_Y__

struct System_y
{
  void (*operation)();
};

void* System_y_init();

#endif /* !__OOP_FACADE_SYSTEM_Y__ */