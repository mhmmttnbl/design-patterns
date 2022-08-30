/**
 * @file oop/creational/builder/c/builder_x.c
 * @author TONBUL, Muhammet
 */

#include <stdlib.h>

#include "builder_x.h"
#include "product_x.h"
#include "product_y.h"

static void
Builder_x_build_product_x()
{
  struct Product *__product_x = Product_x_init();
  Product_operation(__product_x);
}

static void
Builder_x_build_product_y()
{
  struct Product *__product_y = Product_y_init();
  Product_operation(__product_y);
}

static void
Builder_x_ctor(struct Builder_x *__this)
{
  static struct Builder_vt __vt = {
    .build_product_x = Builder_x_build_product_x,
    .build_product_y = Builder_x_build_product_y
  };

  __this->_M_base._M_vt = &__vt;
}

void* 
Builder_x_init()
{
  struct Builder_x *__this = malloc(sizeof(*__this));

  Builder_x_ctor(__this);

  return(__this);
}