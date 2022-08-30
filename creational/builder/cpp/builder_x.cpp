/**
 * @file oop/creational/builder/cpp/builder_x.cpp
 * @author TONBUL, Muhammet
 */

#include "builder_x.h"
#include "product_x.h"
#include "product_y.h"

class _Builder_x_impl
{
public:
  _Builder_x_impl()
    : _M_x(nullptr),
    _M_y(nullptr)
  {}
public:
  void
  _M_build_product_x()
  {
    _M_x = new Product_x; 
    _M_x->operation();
  }

  void
  _M_build_product_y()
  {
    _M_y = new Product_y; 
    _M_y->operation();
  }
private:
  Product_x *_M_x;
  Product_y *_M_y;
};

Builder_x
  ::Builder_x()
    : _M_impl(new _Builder_x_impl)
{}

void
Builder_x
  ::build_product_x()
{ _M_impl->_M_build_product_x(); }

void
Builder_x
  ::build_product_y()
{ _M_impl->_M_build_product_y(); }