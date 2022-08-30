/**
 * @file oop/behavioral/chain-of-responsibility/cpp/handler_y.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "handler_y.h"

class _Handler_y_impl
{
public:
  void
  _M_handle_request(char __x, Handler *__obj)
  {
    if (__x >= 'i' && __x <= 'z')
      std::cout << "Handle by Handler_y" << std::endl;
    else
      __obj->handle_request(__x);
  }
};

Handler_y
  ::Handler_y()
    : _M_impl(new _Handler_y_impl)
{}

void
Handler_y
  ::handle_request(char __x)
{ _M_impl->_M_handle_request(__x, Handler::get()); }