/**
 * @file oop/behavioral/command/cpp/command.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_COMMAND_BASE__
#define __OOP_COMMAND_BASE__

class Command
{
public:
  virtual
  ~Command() = default;
public:
  virtual void
  execute() = 0;
};

#endif /* !__OOP_COMMAND_BASE__ */