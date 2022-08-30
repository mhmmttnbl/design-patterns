/**
 * @file oop/behavioral/command/cpp/main.cpp
 * @author TONBUL, Muhammet
 */

#include "command_x.h"
#include "command_y.h"
#include "receiver.h"
#include "invoker.h"

int
main(int argc, char **argv)
{
  Command *__command_x = new Command_x(new Receiver);
  Command *__command_y = new Command_y(new Receiver);
  
  Invoker *__invoker = new Invoker;

  __invoker->append(__command_x);
  __invoker->append(__command_y);
  __invoker->operation();

  __invoker->remove(__command_x);
  __invoker->operation();

  return(0);
}