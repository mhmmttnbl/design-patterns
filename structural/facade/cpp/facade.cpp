/**
 * @file oop/structural/facade/cpp/facade.cpp
 * @author TONBUL, Muhammet
 */

#include "facade.h"
#include "system_x.h"
#include "system_y.h"

class _Facade_impl
{
public:
  _Facade_impl()
    : _M_x(new System_x),
    _M_y(new System_y)
  {}
public:
  void
  _M_operation_x()
  { _M_x->operation(); }

  void
  _M_operation_y()
  { _M_y->operation(); }
private:
  System_x *_M_x;
  System_y *_M_y;
};

Facade
  ::Facade()
    : _M_impl(new _Facade_impl)
{}

void
Facade
  ::operation_x()
{ _M_impl->_M_operation_x(); }

void
Facade
  ::operation_y()
{ _M_impl->_M_operation_y(); }