/**
 * @file oop/creational/factory-method/cpp/main.cpp
 * @author TONBUL, Muhammet
 */

#include "creator_x.h"
#include "product.h"

int
main(int argc, char **argv)
{
  Creator *__creator = new Creator_x;
  Product *__product = nullptr;

  __product = __creator->create(Creator::Option::PRODUCT_X);
  __product->operation();

  __product = __creator->create(Creator::Option::PRODUCT_Y);
  __product->operation();

  return(0);
}