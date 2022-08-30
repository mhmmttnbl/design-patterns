/**
 * @file oop/structural/facade/cpp/main.cpp
 * @author TONBUL, Muhammet
 */

#include "facade.h"

int
main(int argc, char **argv)
{
  Facade __facade;

  __facade.operation_x();
  __facade.operation_y();
  
  return(0);
}