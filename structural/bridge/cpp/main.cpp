/**
 * @file oop/structural/bridge/cpp/main.cpp
 * @author TONBUL, Muhammet
 */

#include "abstraction.h"
#include "implementor_x.h"
#include "implementor_y.h"

int
main(int argc, char **argv)
{
  Abstraction *__abstraction_x = new Abstraction(new Implementor_x);
  Abstraction *__abstraction_y = new Abstraction(new Implementor_y);
  
  __abstraction_x->operation();
  __abstraction_y->operation();

  return(0);
}