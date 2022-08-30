/**
 * @file oop/behavioral/command/cpp/invoker.cpp
 * @author TONBUL, Muhammet
 */

#include <algorithm>
#include <vector>

#include "invoker.h"
#include "command.h"

class _Invoker_impl
{
public:
  void
  _M_append(Command *__obj)
  { _M_v.push_back(__obj); }

  void
  _M_remove(Command *__obj)
  {
    auto __it = std::find(_M_v.begin(), _M_v.end(), __obj);

    if (__it != _M_v.end())
      _M_v.erase(__it);
  }

  void
  _M_operation()
  {
    for (auto __it = _M_v.begin();
      __it != _M_v.end(); ++__it)
      (*__it)->execute();
  }
private:
  std::vector<Command*> _M_v;
};

Invoker
  ::Invoker()
    : _M_impl(new _Invoker_impl)
{}

void
Invoker
  ::append(Command *__obj)
{ _M_impl->_M_append(__obj); }

void
Invoker
  ::remove(Command *__obj)
{ _M_impl->_M_remove(__obj); }

void
Invoker
  ::operation()
{ _M_impl->_M_operation(); }