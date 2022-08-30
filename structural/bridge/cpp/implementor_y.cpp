/**
 * @file oop/structural/bridge/cpp/implementor_y.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "implementor_y.h"

class _Implementor_y_impl
{
public:
  void
  _M_operation()
  { std::cout << "Operation by Implementor_y" << std::endl; }
};

Implementor_y
  ::Implementor_y()
    : _M_impl(new _Implementor_y_impl)
{}

void
Implementor_y
  ::operation()
{ _M_impl->_M_operation(); }