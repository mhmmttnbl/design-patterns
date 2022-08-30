/**
 * @file oop/behavioral/mediator/cpp/colleague_x.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "colleague_x.h"
#include "mediator.h"

class _Colleague_x_impl
{
public:
  _Colleague_x_impl(Mediator *__obj)
    : _M_obj(__obj)
  {}
public:
  void
  _M_send(const char *__x, Colleague *__this)
  { _M_obj->publish(__x, __this); }

  void
  _M_receive(const char *__x)
  { std::cout << __x << " is received by Colleague_x" << std::endl; }
private:
  Mediator *_M_obj;
};

Colleague_x
  ::Colleague_x(Mediator *__obj)
    : _M_impl(new _Colleague_x_impl(__obj))
{}

void
Colleague_x
  ::send(const char *__x)
{ _M_impl->_M_send(__x, this); }

void
Colleague_x
  ::receive(const char *__x)
{ _M_impl->_M_receive(__x); }