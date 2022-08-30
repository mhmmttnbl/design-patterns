/**
 * @file oop/creational/factory-method/cpp/product_x.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "product_x.h"

class _Product_x_impl
{
public:
  void
  _M_operation()
  { std::cout << "Operation by Product_x" << std::endl; }
};

Product_x
  ::Product_x()
    : _M_impl(new _Product_x_impl)
{}

void
Product_x
  ::operation()
{ _M_impl->_M_operation(); }