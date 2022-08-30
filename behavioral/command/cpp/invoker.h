/**
 * @file oop/behavioral/command/cpp/invoker.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_COMMAND_INVOKER__
#define __OOP_COMMAND_INVOKER__

class Command;

class _Invoker_impl;
class Invoker
{
public:
  Invoker();
public:
  void
  append(Command *__obj);

  void
  remove(Command *__obj);
  
  void
  operation();
private:
  _Invoker_impl *_M_impl;
};

#endif /* !__OOP_COMMAND_INVOKER__ */