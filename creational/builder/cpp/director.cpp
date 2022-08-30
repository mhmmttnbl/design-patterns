/**
 * @file oop/creational/builder/cpp/director.cpp
 * @author TONBUL, Muhammet
 */

#include "director.h"
#include "builder.h"

class _Director_impl
{
public:
  void 
  _M_construct(Builder *__obj)
  {
    __obj->build_product_x();
    __obj->build_product_y();
  }
};

Director
  ::Director()
    : _M_impl(new _Director_impl)
{}

void
Director
  ::construct(Builder *__obj)
{ _M_impl->_M_construct(__obj); }