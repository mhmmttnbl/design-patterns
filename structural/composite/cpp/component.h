/**
 * @file oop/structural/composite/cpp/component.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_COMPOSITE_COMPONENT__
#define __OOP_COMPOSITE_COMPONENT__

class Component
{
public:
  virtual
  ~Component() = default;
public:
  virtual void
  operation() = 0;
};

#endif /* !__OOP_COMPOSITE_COMPONENT__ */