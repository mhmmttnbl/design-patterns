/**
 * @file oop/creational/factory-method/cpp/creator.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_FACTORY_CREATOR__
#define __OOP_FACTORY_CREATOR__

class Product;

class Creator
{
public:
  enum class Option
  {
    PRODUCT_X = 0,
    PRODUCT_Y = 1
  };
public:
  virtual
  ~Creator() = default;
public:
  virtual Product*
  create(Creator::Option __x) = 0;
};

#endif /* !__OOP_FACTORY_CREATOR__ */