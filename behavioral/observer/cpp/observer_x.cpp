/**
 * @file oop/behavioral/observer/cpp/observer_x.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "observer_x.h"
#include "subject.h"

class _Observer_x_impl
{
public:
  void
  _M_update(Subject *__obj)
  {
    if (__obj) {
      std::cout 
        << "Observer_x: Subject state-> " 
        << __obj->get()
        << std::endl;
    }
  }
};

Observer_x
  ::Observer_x()
    : _M_impl(new _Observer_x_impl)
{}

void
Observer_x
  ::update(Subject *__obj)
{ _M_impl->_M_update(__obj); }