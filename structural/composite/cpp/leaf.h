/**
 * @file oop/structural/composite/cpp/leaf.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_COMPOSITE_LEAF__
#define __OOP_COMPOSITE_LEAF__

#include "component.h"

class _Leaf_impl;
class Leaf
  : public Component
{
public:
  Leaf(const char *__x);
public:
  void
  operation() override;
private:
  _Leaf_impl *_M_impl;
};

#endif /* !__OOP_COMPOSITE_LEAF__ */