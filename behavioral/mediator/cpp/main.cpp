/**
 * @file oop/behavioral/mediator/cpp/main.cpp
 * @author TONBUL, Muhammet
 */

#include "mediator_x.h"
#include "colleague_x.h"
#include "colleague_y.h"

int
main(int argc, char **argv)
{
  Mediator_x *__mediator = new Mediator_x;

  Colleague *__colleague_x = new Colleague_x(__mediator);
  Colleague *__colleague_y = new Colleague_y(__mediator);

  __mediator->subscribe(__colleague_x);
  __mediator->subscribe(__colleague_y);

  __colleague_x->send("Message from Colleague_x"); // Received by Colleague_y
  __colleague_y->send("Message from Colleague_y"); // Received by Colleague_x

  return(0);
}