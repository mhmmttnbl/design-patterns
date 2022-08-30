/**
 * @file oop/creational/factory-method/c/product_x.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>
#include <stdlib.h>

#include "product_x.h"

static void
Product_x_operation()
{ printf("Operation of Product_x\n"); }

static void
Product_x_ctor(struct Product_x *__this)
{
  static struct Product_vt __vt = {
    .operation = Product_x_operation
  };

  __this->_M_base._M_vt = &__vt;
}

void*
Product_x_init()
{
  struct Product_x *__this = malloc(sizeof(*__this));

  Product_x_ctor(__this);

  return(__this);
}