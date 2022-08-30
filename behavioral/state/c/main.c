/**
 * @file oop/behavioral/state/c/main.c
 * @author TONBUL, Muhammet
 */

#include "state_x.h"
#include "state_y.h"
#include "context.h"

int
main(int argc, char **argv)
{
  struct Context *__context_x = Context_init(State_x_init());
  __context_x->request(__context_x); // Received by State_x and changed to State_y
  __context_x->request(__context_x); // Received by State_y and changed to State_x

  struct Context *__context_y = Context_init(State_y_init());
  __context_y->request(__context_y); // Received by State_y and changed to State_x
  __context_y->request(__context_y); // Received by State_x and changed to State_y
}