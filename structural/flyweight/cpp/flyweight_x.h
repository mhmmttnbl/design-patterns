/**
 * @file oop/structural/flyweight/cpp/flyweight_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_FLYWEIGHT_X__
#define __OOP_FLYWEIGHT_X__

#include "flyweight.h"

class _Flyweight_x_impl;
class Flyweight_x
  : public Flyweight
{
public:
  Flyweight_x(char __x);
public:
  void
  operation() override;
private:
  _Flyweight_x_impl *_M_impl;
};

#endif /* !__OOP_FLYWEIGHT_X__ */