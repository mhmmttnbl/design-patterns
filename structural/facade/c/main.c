/**
 * @file oop/structural/facade/c/main.c
 * @author TONBUL, Muhammet
 */

#include "facade.h"

int
main(int argc, char **argv)
{
  struct Facade *__facade = Facade_init();

  __facade->operation_x(__facade);
  __facade->operation_y(__facade);
  
  return(0);
}