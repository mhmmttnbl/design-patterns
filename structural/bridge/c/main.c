/**
 * @file oop/structural/bridge/c/main.c
 * @author TONBUL, Muhammet
 */

#include "abstraction.h"
#include "implementor_x.h"
#include "implementor_y.h"

int
main(int argc, char **argv)
{
  struct Abstraction *__abstraction_x = Abstraction_init(Implementor_x_init());
  struct Abstraction *__abstraction_y = Abstraction_init(Implementor_y_init());

  __abstraction_x->operation(__abstraction_x);
  __abstraction_y->operation(__abstraction_y);

  return(0);
}