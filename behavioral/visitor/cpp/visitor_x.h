/**
 * @file oop/behavioral/visitor/cpp/visitor_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_VISITOR_X__
#define __OOP_VISITOR_X__

#include "visitor.h"

class _Visitor_x_impl;
class Visitor_x
  : public Visitor
{
public:
  Visitor_x();
public:
  void
  visit_x(Element *__obj) override;

  void
  visit_y(Element *__obj) override;
private:
  _Visitor_x_impl *_M_impl;
};

#endif /* !__OOP_VISITOR_X__ */