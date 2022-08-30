/**
 * @file oop/structural/flyweight/cpp/main.cpp
 * @author TONBUL, Muhammet
 */

#include "flyweight_factory.h"

int
main(int argc, char **argv)
{
  Flyweight_factory __factory;

  __factory.get('1')->operation();
  __factory.get('2')->operation();

  return(0);
}