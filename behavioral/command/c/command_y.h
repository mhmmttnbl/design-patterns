/**
 * @file oop/behavioral/command/c/command_y.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_COMMAND_Y__
#define __OOP_COMMAND_Y__

#include "command.h"

struct Receiver;

struct Command_y
{
  struct Command   _M_base;
  struct Receiver *_M_obj;
};

void* Command_y_init(struct Receiver *__obj);

#endif /* !__OOP_COMMAND_Y__ */