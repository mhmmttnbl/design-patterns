/**
 * @file oop/structural/flyweight/cpp/flyweight_x.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "flyweight_x.h"

class _Flyweight_x_impl
{
public:
  _Flyweight_x_impl(char __x)
    : _M_x(__x)
  {}
public:
  void
  _M_operation()
  { 
    std::cout 
      << "Operation with key : " 
      << _M_x 
      << " by Flyweight_x" 
      << std::endl;
  }
private:
  char _M_x;
};

Flyweight_x
  ::Flyweight_x(char __x)
    : _M_impl(new _Flyweight_x_impl(__x))
{}

void
Flyweight_x
  ::operation()
{ _M_impl->_M_operation(); }