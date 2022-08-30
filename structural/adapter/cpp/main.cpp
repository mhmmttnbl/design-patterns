/**
 * @file oop/structural/adapter/cpp/main.cpp
 * @author TONBUL, Muhammet
 */

#include "adapter.h"

int
main(int argc, char **argv)
{
  Target *__target = new Adapter;

  __target->request();
  
  return(0);
}