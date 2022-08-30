/**
 * @file oop/behavioral/visitor/cpp/visitor_x.cpp
 * @author TONBUL, Muhammet
 */

#include "visitor_x.h"
#include "element.h"

class _Visitor_x_impl
{
public:
  void
  _M_visit_x(Element *__obj)
  { __obj->operation_x(); }

  void
  _M_visit_y(Element *__obj)
  { __obj->operation_y(); }
};

Visitor_x
  ::Visitor_x()
    : _M_impl(new _Visitor_x_impl)
{}

void
Visitor_x
  ::visit_x(Element *__obj)
{ _M_impl->_M_visit_x(__obj); }

void
Visitor_x
  ::visit_y(Element *__obj)
{ _M_impl->_M_visit_y(__obj); }