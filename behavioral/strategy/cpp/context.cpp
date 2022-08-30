/**
 * @file oop/behavioral/strategy/cpp/context.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "context.h"
#include "strategy.h"

class _Context_impl
{
public:
  _Context_impl(Strategy *__obj)
    : _M_obj(__obj)
  {}
public:
  void
  _M_operation()
  { _M_obj->algorithm(); }
private:
  Strategy *_M_obj;
};

Context
  ::Context(Strategy *__obj)
    : _M_impl(new _Context_impl(__obj))
{}

void
Context
  ::operation()
{ _M_impl->_M_operation(); }