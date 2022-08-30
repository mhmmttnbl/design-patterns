/**
 * @file oop/creational/abstract-factory/c/product_y.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_ABSTRACT_FACTORY_PRODUCT_Y__
#define __OOP_ABSTRACT_FACTORY_PRODUCT_Y__

#include "product.h"

struct Product_y
{
  struct Product _M_base;
};

void* Product_y_init();

#endif /* !__OOP_ABSTRACT_FACTORY_PRODUCT_Y__ */