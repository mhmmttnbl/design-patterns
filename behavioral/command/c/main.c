/**
 * @file oop/behavioral/command/c/main.c
 * @author TONBUL, Muhammet
 */

#include "command_x.h"
#include "command_y.h"
#include "receiver.h"
#include "invoker.h"

int
main(int argc, char **argv)
{
  struct Command *__command_x = Command_x_init(Receiver_init());
  struct Command *__command_y = Command_y_init(Receiver_init());

  struct Invoker *__invoker = Invoker_init();

  __invoker->append(__invoker, __command_x);
  __invoker->append(__invoker, __command_y);
  __invoker->operation(__invoker);

  __invoker->remove(__invoker, __command_x);
  __invoker->operation(__invoker);

  return(0);
}