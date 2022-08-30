/**
 * @file oop/behavioral/command/cpp/receiver.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "receiver.h"

class _Receiver_impl
{
public:
  void
  _M_action(const char *__x)
  { std::cout << "Action by-> " << __x << std::endl; }
};

Receiver
  ::Receiver()
    : _M_impl(new _Receiver_impl)
{}

void
Receiver
  ::action(const char *__x)
{ _M_impl->_M_action(__x); }