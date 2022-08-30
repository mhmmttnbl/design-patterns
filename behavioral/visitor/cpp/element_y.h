/**
 * @file oop/behavioral/visitor/cpp/element_y.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_VISITOR_ELEMENT_Y__
#define __OOP_VISITOR_ELEMENT_Y__

#include "element.h"

class _Element_y_impl;
class Element_y
  : public Element
{
public:
  Element_y();
public:
  void
  accept(Visitor *__obj) override;

  void
  operation_y() override;
private:
  _Element_y_impl *_M_impl;
};

#endif /* !__OOP_VISITOR_ELEMENT_Y__ */