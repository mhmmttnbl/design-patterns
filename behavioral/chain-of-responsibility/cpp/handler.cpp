/**
 * @file oop/behavioral/chain-of-responsibility/cpp/handler.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "handler.h"

class _Handler_impl
{
public:
  _Handler_impl()
    : _M_obj(nullptr)
  {}
public:
  void
  _M_handle_request(char __x)
  {
    if (_M_obj)
      _M_obj->handle_request(__x);
    else
      std::cout << "Nothing to handle." << std::endl;
  }

  void
  _M_next(Handler *__obj)
  { _M_obj = __obj; }

  Handler*
  _M_get()
  { return(_M_obj); }
private:
  Handler *_M_obj;
};

Handler
  ::Handler()
    : _M_impl(new _Handler_impl)
{}

Handler
  ::~Handler()
{}

void
Handler
  ::handle_request(char __x)
{ _M_impl->_M_handle_request(__x); }

void
Handler
  ::next(Handler *__obj)
{ _M_impl->_M_next(__obj); }

Handler*
Handler
  ::get()
{ return(_M_impl->_M_get()); }