/**
 * @file oop/behavioral/observer/cpp/observer_y.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "observer_y.h"
#include "subject.h"

class _Observer_y_impl
{
public:
  void
  _M_update(Subject *__obj)
  {
    if (__obj) {
      std::cout 
        << "Observer_y: Subject state-> " 
        << __obj->get()
        << std::endl;
    }
  }
};

Observer_y
  ::Observer_y()
    : _M_impl(new _Observer_y_impl)
{}

void
Observer_y
  ::update(Subject *__obj)
{ _M_impl->_M_update(__obj); }