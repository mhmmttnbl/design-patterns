/**
 * @file oop/behavioral/strategy/c/main.c
 * @author TONBUL, Muhammet
 */

#include "context.h"
#include "strategy_x.h"
#include "strategy_y.h"

int
main(int argc, char **argv)
{
  struct Context *__context_x = Context_init(Strategy_x_init());
  struct Context *__context_y = Context_init(Strategy_y_init());

  __context_x->operation(__context_x);
  __context_y->operation(__context_y);

  return(0);
}