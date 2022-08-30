/**
 * @file oop/creational/builder/c/product.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_BUILDER_PRODUCT__
#define __OOP_BUILDER_PRODUCT__

struct Product_vt;
struct Product
{
  const struct Product_vt *_M_vt;
};

struct Product_vt
{
  void (*operation)();
};

static inline void
Product_operation(struct Product *__this)
{ __this->_M_vt->operation(); }

#endif /* !__OOP_BUILDER_PRODUCT__ */