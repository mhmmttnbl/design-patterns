/**
 * @file oop/creational/abstract-factory/cpp/product_y.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_ABSTRACT_FACTORY_PRODUCT_Y__
#define __OOP_ABSTRACT_FACTORY_PRODUCT_Y__

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

#endif /* !__OOP_ABSTRACT_FACTORY_PRODUCT_Y__ */