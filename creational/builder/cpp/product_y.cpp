/**
 * @file oop/creational/builder/cpp/product_y.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "product_y.h"

class _Product_y_impl
{
public:
  void
  _M_operation()
  { std::cout << "Operation of Product_y" << std::endl; }
};

Product_y
  ::Product_y()
    : _M_impl(new _Product_y_impl)
{}

void
Product_y
  ::operation()
{ _M_impl->_M_operation(); }