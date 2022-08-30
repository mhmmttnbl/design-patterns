/**
 * @file oop/behavioral/command/cpp/command_y.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_COMMAND_Y__
#define __OOP_COMMAND_Y__

#include "command.h"

class Receiver;

class _Command_y_impl;
class Command_y
  : public Command
{
public:
  Command_y(Receiver *__obj);
public:
  void
  execute() override;
private:
  _Command_y_impl *_M_impl;
};

#endif /* !__OOP_COMMAND_Y__ */