/**
 * @file oop/creational/abstract-factory/cpp/abstract_factory.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_ABSTRACT_FACTORY_BASE__
#define __OOP_ABSTRACT_FACTORY_BASE__

class Product_x;
class Product_y;

class Abstract_factory
{
public:
  virtual
  ~Abstract_factory() = default;
public:
  virtual Product_x* 
  create_prod_x() = 0;
  
  virtual Product_y* 
  create_prod_y() = 0;
};

#endif /* !__OOP_ABSTRACT_FACTORY_BASE__ */