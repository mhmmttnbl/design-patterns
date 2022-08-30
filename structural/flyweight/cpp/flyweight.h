/**
 * @file oop/structural/flyweight/cpp/flyweight.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_FLYWEIGHT_BASE__
#define __OOP_FLYWEIGHT_BASE__

class Flyweight
{
public:
  virtual
  ~Flyweight() = default;
public:
  virtual void
  operation() = 0;
};

#endif /* !__OOP_FLYWEIGHT_BASE__ */