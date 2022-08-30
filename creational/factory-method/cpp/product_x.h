/**
 * @file oop/creational/factory-method/cpp/product_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_FACTORY_PRODUCT_X__
#define __OOP_FACTORY_PRODUCT_X__

#include "product.h"

class _Product_x_impl;
class Product_x
  : public Product
{
public:
  Product_x();
public:
  void
  operation() override;
private:
  _Product_x_impl *_M_impl;
};

#endif /* ! __OOP_FACTORY_PRODUCT_X__ */