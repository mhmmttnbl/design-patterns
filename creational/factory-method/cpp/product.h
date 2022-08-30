/**
 * @file oop/creational/factory-method/cpp/product.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_FACTORY_PRODUCT__
#define __OOP_FACTORY_PRODUCT__

class Product
{
public:
  virtual 
  ~Product() = default;
public:
  virtual void
  operation() = 0;
};

#endif /* !__OOP_FACTORY_PRODUCT__ */