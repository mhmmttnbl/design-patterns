/**
 * @file oop/creational/builder/cpp/product.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_BUILDER_PRODUCT__
#define __OOP_BUILDER_PRODUCT__

class Product
{
public:
  virtual
  ~Product() = default;
public:
  virtual void
  operation() = 0;
};

#endif /* !__OOP_BUILDER_PRODUCT__ */