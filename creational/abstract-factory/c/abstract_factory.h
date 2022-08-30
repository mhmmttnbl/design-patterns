/**
 * @file oop/creational/abstract-factory/c/abstract_factory.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_ABSTRACT_FACTORY_BASE__
#define __OOP_ABSTRACT_FACTORY_BASE__

struct Product_x;
struct Product_y;

struct Abstract_factory_vt;
struct Abstract_factory
{
  const struct Abstract_factory_vt *_M_vt;
};

struct Abstract_factory_vt
{
  struct Product_x* (*create_prod_x)();
  struct Product_y* (*create_prod_y)();
};

static inline struct Product_x*
Abstract_factory_create_product_x(struct Abstract_factory *__this)
{ return(__this->_M_vt->create_prod_x()); }

static inline struct Product_y*
Abstract_factory_create_product_y(struct Abstract_factory *__this)
{ return(__this->_M_vt->create_prod_y()); }

#endif /* !__OOP_ABSTRACT_FACTORY_BASE__ */