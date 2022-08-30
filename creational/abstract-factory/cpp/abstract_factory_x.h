/**
 * @file oop/creational/abstract-factory/cpp/abstract_factory_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_ABSTRACT_FACTORY_X__
#define __OOP_ABSTRACT_FACTORY_X__

#include "abstract_factory.h"

class _Abstract_factory_x_impl;
class Abstract_factory_x
  : public Abstract_factory
{
public:
  Abstract_factory_x();
public:
  Product_x*
  create_prod_x() override;

  Product_y*
  create_prod_y() override;
private:
  _Abstract_factory_x_impl *_M_impl;
};

#endif /* !__OOP_ABSTRACT_FACTORY_X__ */