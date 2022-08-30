/**
 * @file oop/behavioral/command/c/command_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_COMMAND_X__
#define __OOP_COMMAND_X__

#include "command.h"

struct Receiver;

struct Command_x
{
  struct Command   _M_base;
  struct Receiver *_M_obj;
};

void* Command_x_init(struct Receiver *__obj);

#endif /* !__OOP_COMMAND_X__ */