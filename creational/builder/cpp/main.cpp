/**
 * @file oop/creational/builder/cpp/main.cpp
 * @author TONBUL, Muhammet
 */

#include "director.h"
#include "builder_x.h"

int
main(int argc, char **argv)
{
  Director __director;

  __director.construct(new Builder_x());

  return(0);
}