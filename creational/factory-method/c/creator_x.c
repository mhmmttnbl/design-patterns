/**
 * @file oop/creational/factory-method/c/creator_x.c
 * @author TONBUL, Muhammet
 */

#include <stdlib.h>

#include "creator_x.h"
#include "product_x.h"
#include "product_y.h"

static struct Product*
Creator_x_create(enum Option __x)
{
  struct Product *__product = NULL;
  
  switch (__x) 
  {
  case PRODUCT_X : 
    { __product = Product_x_init(); break; }
  case PRODUCT_Y :
    { __product = Product_y_init(); break; }
  }

  return(__product);
}

static void
Creator_x_ctor(struct Creator_x *__this)
{
  static struct Creator_vt __vt = {
    .create = Creator_x_create
  };

  __this->_M_base._M_vt = &__vt;
}

void*
Creator_x_init()
{
  struct Creator_x *__this = malloc(sizeof(*__this));

  Creator_x_ctor(__this);

  return(__this);
}