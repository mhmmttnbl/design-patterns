/**
 * @file oop/creational/builder/c/product_y.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>
#include <stdlib.h>

#include "product_y.h"

static void
Product_y_operation()
{ printf("Operation of Product_y\n"); }

static void
Product_y_ctor(struct Product_y *__this)
{
  static struct Product_vt __vt = {
    .operation = Product_y_operation
  };

  __this->_M_base._M_vt = &__vt;
}

void*
Product_y_init()
{
  struct Product_y *__this = malloc(sizeof(*__this));

  Product_y_ctor(__this);

  return(__this);
}