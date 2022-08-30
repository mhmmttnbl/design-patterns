/**
 * @file oop/creational/factory-method/c/main.c
 * @author TONBUL, Muhammet
 */

#include "creator_x.h"
#include "product.h"

int
main(int argc, char **argv)
{
  struct Creator *__creator = Creator_x_init();
  struct Product *__product = 0;

  __product = Creator_create(__creator, PRODUCT_X);
  Product_operation(__product);

  __product = Creator_create(__creator, PRODUCT_Y);
  Product_operation(__product);

  return(0);
}