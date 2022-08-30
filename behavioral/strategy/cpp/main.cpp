/**
 * @file oop/behavioral/strategy/cpp/main.cpp
 * @author TONBUL, Muhammet
 */

#include "context.h"
#include "strategy_x.h"
#include "strategy_y.h"

int
main(int argc, char **argv)
{
  Context __context_x(new Strategy_x);
  Context __context_y(new Strategy_y);
  
  __context_x.operation();
  __context_y.operation();

  return(0);
}