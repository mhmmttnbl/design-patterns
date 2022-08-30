/**
 * @file oop/structural/composite/cpp/leaf.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "leaf.h"

class _Leaf_impl
{
public:
  _Leaf_impl(const char *__x)
    : _M_x(__x)
  {}
public:
  void
  _M_operation()
  { std::cout << _M_x << std::endl; }
private:
  const char *_M_x;
};

Leaf
  ::Leaf(const char *__x)
    : _M_impl(new _Leaf_impl(__x))
{}

void
Leaf
  ::operation()
{ _M_impl->_M_operation(); }