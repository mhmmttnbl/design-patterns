/**
 * @file oop/structural/composite/cpp/composite.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_COMPOSITE_BASE__
#define __OOP_COMPOSITE_BASE__

#include "component.h"

class _Composite_impl;
class Composite
  : public Component
{
public:
  Composite();
public:
  void
  operation() override;
public:
  void
  append(Component *__x);

  void
  remove(Component *__x);
private:
  _Composite_impl *_M_impl;
};

#endif /* !__OOP_COMPOSITE_BASE__ */