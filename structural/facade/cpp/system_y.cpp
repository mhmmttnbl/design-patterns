/**
 * @file oop/structural/facade/cpp/system_y.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "system_y.h"

class _System_y_impl
{
public:
  void
  _M_operation()
  { std::cout << "Operation by System_y" << std::endl; }
};

System_y
  ::System_y()
    : _M_impl(new _System_y_impl)
{}

void
System_y
  ::operation()
{ _M_impl->_M_operation(); }