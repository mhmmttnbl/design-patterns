/**
 * @file oop/behavioral/template-method/cpp/concrete.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "concrete.h"

class _Concrete_impl
{
public:
  void
  _M_primitive_operation_x()
  { std::cout << "Operation_x by Concrete" << std::endl; }

  void
  _M_primitive_operation_y()
  { std::cout << "Operation_y by Concrete" << std::endl; }
};

Concrete
  ::Concrete()
    : _M_impl(new _Concrete_impl)
{}

void
Concrete
  ::primitive_operation_x()
{ _M_impl->_M_primitive_operation_x(); }

void
Concrete
  ::primitive_operation_y()
{ _M_impl->_M_primitive_operation_y(); }