/**
 * @file oop/creational/abstract-factory/c/main.c
 * @author TONBUL, Muhammet
 */

#include "abstract_factory_x.h"
#include "product_x.h"
#include "product_y.h"

int
main(int argc, char **argv)
{
  struct Abstract_factory *__factory = Abstract_factory_x_init();

  struct Product *__product_x = Abstract_factory_create_product_x(__factory);
  Product_operation(__product_x);

  struct Product *__product_y = Abstract_factory_create_product_y(__factory);
  Product_operation(__product_y);

  return(0);
}