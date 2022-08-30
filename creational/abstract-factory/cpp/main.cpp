/**
 * @file oop/creational/abstract-factory/cpp/main.cpp
 * @author TONBUL, Muhammet
 */

#include "abstract_factory_x.h"
#include "product_x.h"
#include "product_y.h"

int
main(int argc, char **argv)
{
  Abstract_factory *__factory = new Abstract_factory_x();
  
  Product *__product_x = __factory->create_prod_x();
  __product_x->operation();

  Product *__product_y = __factory->create_prod_y();
  __product_y->operation();

  return(0);
}