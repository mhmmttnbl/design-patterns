/**
 * @file oop/creational/builder/c/main.c
 * @author TONBUL, Muhammet
 */

#include "director.h"
#include "builder_x.h"

int
main(int argc, char **argv)
{
  struct Director *__director = Director_init();

  __director->construct(Builder_x_init());
  
  return(0);
}