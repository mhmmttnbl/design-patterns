/**
 * @file oop/structural/composite/cpp/composite.cpp
 * @author TONBUL, Muhammet
 */

#include <algorithm>
#include <vector>

#include "composite.h"

class _Composite_impl
{
public:
  void
  _M_operation()
  {
    for (auto __it = _M_v.begin(); 
      __it != _M_v.end(); ++__it)
      (*__it)->operation();
  }

  void
  _M_append(Component *__x)
  { _M_v.push_back(__x); }

  void
  _M_remove(Component *__x)
  {
    auto __it = std::find(_M_v.begin(), _M_v.end(), __x);

    if (__it != _M_v.end())
      _M_v.erase(__it);
  }
private:
  std::vector<Component*> _M_v;
};

Composite
  ::Composite()
    : _M_impl(new _Composite_impl)
{}

void
Composite
  ::operation()
{ _M_impl->_M_operation(); }

void
Composite
  ::append(Component *__x)
{ _M_impl->_M_append(__x); }

void
Composite
  ::remove(Component *__x)
{ _M_impl->_M_remove(__x); }