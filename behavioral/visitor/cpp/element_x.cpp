/**
 * @file oop/behavioral/visitor/cpp/element_x.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "element_x.h"
#include "visitor.h"

class _Element_x_impl
{
public:
  void
  _M_accept(Visitor *__obj, Element *__this)
  { __obj->visit_x(__this); }

  void
  _M_operation_x()
  { std::cout << "Operation_x by Element_x" << std::endl; }
};

Element_x
  ::Element_x()
    : _M_impl(new _Element_x_impl)
{}

void
Element_x
  ::accept(Visitor *__obj)
{ _M_impl->_M_accept(__obj, this); }

void
Element_x
  ::operation_x()
{ _M_impl->_M_operation_x(); }