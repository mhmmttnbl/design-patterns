/**
 * @file oop/structural/bridge/cpp/abstraction.cpp
 * @author TONBUL, Muhammet
 */

#include "abstraction.h"
#include "implementor.h"

class _Abstraction_impl
{
public:
  _Abstraction_impl(Implementor *__obj)
    : _M_obj(__obj)
  {}
public:
  void
  _M_operation()
  { _M_obj->operation(); }
private:
  Implementor *_M_obj;
};

Abstraction
  ::Abstraction(Implementor *__obj)
    : _M_impl(new _Abstraction_impl(__obj))
{}

void
Abstraction
  ::operation()
{ _M_impl->_M_operation(); }