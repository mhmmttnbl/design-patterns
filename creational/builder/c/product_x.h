/**
 * @file oop/creational/builder/c/product_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_BUILDER_PRODUCT_X__
#define __OOP_BUILDER_PRODUCT_X__

#include "product.h"

struct Product_x
{
  struct Product _M_base;
};

void* Product_x_init();

#endif /* !__OOP_BUILDER_PRODUCT_X__ */