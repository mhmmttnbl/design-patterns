/**
 * @file oop/creational/abstract-factory/c/abstract_factory_x.c
 * @author TONBUL, Muhammet
 */

#include <stdlib.h>

#include "abstract_factory_x.h"
#include "product_x.h"
#include "product_y.h"

static struct Product_x*
Abstract_factory_x_create_product_x()
{ return(Product_x_init()); }

static struct Product_y*
Abstract_factory_x_create_product_y()
{ return(Product_y_init()); }

static void
Abstract_factory_x_ctor(struct Abstract_factory_x *__this)
{
  /* Casting to base class methods is not required. */
  static struct Abstract_factory_vt __vt = {
    .create_prod_x = Abstract_factory_x_create_product_x,
    .create_prod_y = Abstract_factory_x_create_product_y
  };

  __this->_M_base._M_vt = &__vt;
}

void* 
Abstract_factory_x_init()
{
  struct Abstract_factory_x *__this = malloc(sizeof(*__this));

  Abstract_factory_x_ctor(__this);

  return(__this);
}