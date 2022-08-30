/**
 * @file oop/behavioral/state/cpp/main.cpp
 * @author TONBUL, Muhammet
 */

#include "state_x.h"
#include "state_y.h"
#include "context.h"

int
main(int argc, char **argv)
{
  Context *__context_x = new Context(new State_x);
  __context_x->request(); // Received by State_x and changed to State_y
  __context_x->request(); // Received by State_y and changed to State_x

  Context *__context_y = new Context(new State_y);
  __context_y->request(); // Received by State_y and changed to State_x
  __context_y->request(); // Received by State_x and changed to State_y

  return(0);
}