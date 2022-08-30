/**
 * @file oop/behavioral/visitor/cpp/element_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_VISITOR_ELEMENT_X__
#define __OOP_VISITOR_ELEMENT_X__

#include "element.h"

class _Element_x_impl;
class Element_x
  : public Element
{
public:
  Element_x();
public:
  void
  accept(Visitor *__obj) override;

  void
  operation_x() override;
private:
  _Element_x_impl *_M_impl;
};

#endif /* !__OOP_VISITOR_ELEMENT_X__ */