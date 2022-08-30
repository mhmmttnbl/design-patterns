/**
 * @file oop/behavioral/chain-of-responsibility/cpp/handler_x.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "handler_x.h"

class _Handler_x_impl
{
public:
  void
  _M_handle_request(char __x, Handler *__obj)
  {
    if (__x >= 'a' && __x <= 'h')
      std::cout << "Handle by Handler_x" << std::endl;
    else
      __obj->handle_request(__x);
  }
};

Handler_x
  ::Handler_x()
    : _M_impl(new _Handler_x_impl)
{}

void
Handler_x
  ::handle_request(char __x)
{ _M_impl->_M_handle_request(__x, Handler::get()); }