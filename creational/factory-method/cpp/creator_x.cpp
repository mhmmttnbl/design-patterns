/**
 * @file oop/creational/factory-method/cpp/creator_x.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>
#include <vector>

#include "creator_x.h"
#include "product_x.h"
#include "product_y.h"

class _Creator_x_impl
{
public:
  _Creator_x_impl()
    : _M_obj(nullptr)
  {}
public:
  Product*
  _M_create(Creator::Option __x)
  {
    switch (__x) 
    {
    case Creator::Option::PRODUCT_X : 
      { _M_obj = new Product_x; break; }
    case Creator::Option::PRODUCT_Y :
      { _M_obj = new Product_y; break; }
    }

    return(_M_obj);
  }
private:
  Product *_M_obj;
};

Creator_x
  ::Creator_x()
    : _M_impl(new _Creator_x_impl)
{}

Product*
Creator_x
  ::create(Creator::Option __x)
{ return(_M_impl->_M_create(__x)); }