/**
 * @file oop/structural/adapter/c/main.c
 * @author TONBUL, Muhammet
 */

#include "adapter.h"

int
main(int argc, char **argv)
{
  struct Target *__target = Adapter_init();

  Target_request(__target);
  
  return(0);
}