/**
 * @file oop/creational/builder/cpp/product_y.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_BUILDER_PRODUCT_Y__
#define __OOP_BUILDER_PRODUCT_Y__

#include "product.h"

class _Product_y_impl;
class Product_y
  : public Product
{
public:
  Product_y();
public:
  void
  operation() override;
private:
  _Product_y_impl *_M_impl;
};

#endif /* !__OOP_BUILDER_PRODUCT_Y__ */