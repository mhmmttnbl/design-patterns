/**
 * @file oop/behavioral/mediator/c/main.c
 * @author TONBUL, Muhammet
 */

#include "mediator_x.h"
#include "colleague_x.h"
#include "colleague_y.h"

int
main(int argc, char **argv)
{
  struct Mediator_x *__mediator = Mediator_x_init();

  struct Colleague *__colleague_x = Colleague_x_init(__mediator);
  struct Colleague *__colleague_y = Colleague_y_init(__mediator);

  __mediator->subscribe(__mediator, __colleague_x);
  __mediator->subscribe(__mediator, __colleague_y);

  Colleague_send(__colleague_x, "Message from Colleague_x");
  Colleague_send(__colleague_y, "Message from Colleague_y");

  return(0);
}