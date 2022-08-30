/**
 * @file oop/structural/bridge/cpp/implementor_x.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "implementor_x.h"

class _Implementor_x_impl
{
public:
  void
  _M_operation()
  { std::cout << "Operation by Implementor_x" << std::endl; }
};

Implementor_x
  ::Implementor_x()
    : _M_impl(new _Implementor_x_impl)
{}

void
Implementor_x
  ::operation()
{ _M_impl->_M_operation(); }