/**
 * @file oop/creational/abstract-factory/cpp/abstract_factory_x.cpp
 * @author TONBUL, Muhammet
 */

#include "abstract_factory_x.h"
#include "product_x.h"
#include "product_y.h"

class _Abstract_factory_x_impl
{
public:
  Product_x*
  _M_create_prod_x()
  { return(new Product_x); }

  Product_y*
  _M_create_prod_y()
  { return(new Product_y); }
};

Abstract_factory_x
  ::Abstract_factory_x()
    : _M_impl(new _Abstract_factory_x_impl)
{}

Product_x*
Abstract_factory_x
  ::create_prod_x()
{ return(_M_impl->_M_create_prod_x()); }

Product_y*
Abstract_factory_x
  ::create_prod_y()
{ return(_M_impl->_M_create_prod_y()); }