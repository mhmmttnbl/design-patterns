/**
 * @file oop/behavioral/command/cpp/command_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_COMMAND_X__
#define __OOP_COMMAND_X__

#include "command.h"

class Receiver;

class _Command_x_impl;
class Command_x
  : public Command
{
public:
  Command_x(Receiver *__obj);
public:
  void
  execute() override;
private:
  _Command_x_impl *_M_impl;
};

#endif /* !__OOP_COMMAND_X__ */