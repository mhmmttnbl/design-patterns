/**
 * @file oop/structural/facade/cpp/system_x.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "system_x.h"

class _System_x_impl
{
public:
  void
  _M_operation()
  { std::cout << "Operation by System_x" << std::endl; }
};

System_x
  ::System_x()
    : _M_impl(new _System_x_impl)
{}

void
System_x
  ::operation()
{ _M_impl->_M_operation(); }