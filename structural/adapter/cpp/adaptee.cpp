/**
 * @file oop/structural/adapter/cpp/adaptee.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "adaptee.h"

class _Adaptee_impl
{
public:
  void
  _M_specific_request()
  { std::cout << "Specific request by Adaptee." << std::endl; }
};

Adaptee
  ::Adaptee()
    : _M_impl(new _Adaptee_impl)
{}

void
Adaptee
  ::specific_request()
{ _M_impl->_M_specific_request(); }