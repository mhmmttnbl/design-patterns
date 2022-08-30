/**
 * @file oop/creational/factory-method/c/creator.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_FACTORY_CREATOR__
#define __OOP_FACTORY_CREATOR__

enum Option
{
  PRODUCT_X = 0,
  PRODUCT_Y = 1,
};

struct Product;

struct Creator_vt;
struct Creator
{
  const struct Creator_vt *_M_vt;
};

struct Creator_vt
{
  struct Product* (*create)(enum Option __x);
};

static inline struct Product*
Creator_create(struct Creator *__this, enum Option __x)
{ return(__this->_M_vt->create(__x)); }

#endif /* !__OOP_FACTORY_CREATOR__ */