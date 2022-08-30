/**
 * @file oop/behavioral/mediator/cpp/colleague_y.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "colleague_y.h"
#include "mediator.h"

class _Colleague_y_impl
{
public:
  _Colleague_y_impl(Mediator *__obj)
    : _M_obj(__obj)
  {}
public:
  void
  _M_send(const char *__x, Colleague *__this)
  { _M_obj->publish(__x, __this); }

  void
  _M_receive(const char *__x)
  { std::cout << __x << " is received by Colleague_y" << std::endl; }
private:
  Mediator *_M_obj;
};

Colleague_y
  ::Colleague_y(Mediator *__obj)
    : _M_impl(new _Colleague_y_impl(__obj))
{}

void
Colleague_y
  ::send(const char *__x)
{ _M_impl->_M_send(__x, this); }

void
Colleague_y
  ::receive(const char *__x)
{ _M_impl->_M_receive(__x); }