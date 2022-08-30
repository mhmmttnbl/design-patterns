/**
 * @file oop/structural/proxy/cpp/subject_x.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "subject_x.h"

class _Subject_x_impl
{
public:
  void
  _M_request()
  { std::cout << "Request by Subject_x" << std::endl; }
};

Subject_x
  ::Subject_x()
    : _M_impl(new _Subject_x_impl)
{}

void
Subject_x
  ::request()
{ _M_impl->_M_request(); }

