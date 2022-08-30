/**
 * @file oop/behavioral/strategy/cpp/strategy_y.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "strategy_y.h"

class _Strategy_y_impl
{
public:
  void
  _M_algorithm()
  { std::cout << "Algorithm by Strategy_y" << std::endl; }
};

Strategy_y
  ::Strategy_y()
    : _M_impl(new _Strategy_y_impl)
{}

void
Strategy_y
  ::algorithm()
{ _M_impl->_M_algorithm(); }