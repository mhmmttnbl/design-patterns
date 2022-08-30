/**
 * @file oop/behavioral/state/cpp/context.cpp
 * @author TONBUL, Muhammet
 */

#include "context.h"
#include "state.h"

class _Context_impl
{
public:
  _Context_impl(State *__obj)
    : _M_obj(__obj)
  {}
public:
  void
  _M_request(Context *__obj)
  { _M_obj->handle(__obj); }

  void
  _M_change(State *__obj)
  { _M_obj = __obj; }
private:
  State *_M_obj;
};

Context
  ::Context(State *__obj)
    : _M_impl(new _Context_impl(__obj))
{}

void
Context
  ::request()
{ _M_impl->_M_request(this); }

void
Context
  ::change(State *__obj)
{ _M_impl->_M_change(__obj); }