/**
 * @file oop/behavioral/visitor/cpp/element_y.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "element_y.h"
#include "visitor.h"

class _Element_y_impl
{
public:
  void
  _M_accept(Visitor *__obj, Element *__this)
  { __obj->visit_y(__this); }

  void
  _M_operation_y()
  { std::cout << "Operation_y by Element_y" << std::endl; }
};

Element_y
  ::Element_y()
    : _M_impl(new _Element_y_impl)
{}

void
Element_y
  ::accept(Visitor *__obj)
{ _M_impl->_M_accept(__obj, this); }

void
Element_y
  ::operation_y()
{ _M_impl->_M_operation_y(); }