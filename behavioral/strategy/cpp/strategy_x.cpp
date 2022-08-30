/**
 * @file oop/behavioral/strategy/cpp/strategy_x.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "strategy_x.h"

class _Strategy_x_impl
{
public:
  void
  _M_algorithm()
  { std::cout << "Algorithm by Strategy_x" << std::endl; }
};

Strategy_x
  ::Strategy_x()
    : _M_impl(new _Strategy_x_impl)
{}

void
Strategy_x
  ::algorithm()
{ _M_impl->_M_algorithm(); }