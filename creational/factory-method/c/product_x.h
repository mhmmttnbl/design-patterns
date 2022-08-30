/**
 * @file oop/creational/factory-method/c/product_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_FACTORY_METHOD_PRODUCT_X_
#define __OOP_FACTORY_METHOD_PRODUCT_X_

#include "product.h"

struct Product_x
{
  struct Product _M_base;
};

void* Product_x_init();

#endif /* !__OOP_FACTORY_METHOD_PRODUCT_X_ */