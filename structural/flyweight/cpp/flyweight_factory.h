/**
 * @file oop/structural/flyweight/cpp/flyweight_factory.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_FLYWEIGHT_FACTORY__
#define __OOP_FLYWEIGHT_FACTORY__

#include "flyweight.h"

class _Flyweight_factory_impl;
class Flyweight_factory
{
public:
  Flyweight_factory();
public:
  Flyweight*
  get(char __x);
private:
  _Flyweight_factory_impl *_M_impl;
};

#endif /* !__OOP_FLYWEIGHT_FACTORY__ */