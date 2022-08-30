/**
 * @file oop/structural/flyweight/c/main.c
 * @author TONBUL, Muhammet
 */

#include "flyweight_factory.h"

int
main(int argc, char **argv)
{
  struct Flyweight_factory *__factory = Flyweight_factory_init();

  Flyweight_operation(__factory->get(__factory, '1'));
  Flyweight_operation(__factory->get(__factory, '2'));

  return(0);
}