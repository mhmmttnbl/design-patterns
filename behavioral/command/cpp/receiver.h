/**
 * @file oop/behavioral/command/cpp/receiver.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_COMMAND_RECEIVER__
#define __OOP_COMMAND_RECEIVER__

class _Receiver_impl;
class Receiver
{
public:
  Receiver();
public:
  void
  action(const char *__x);
private:
  _Receiver_impl *_M_impl;
};

#endif /* !__OOP_COMMAND_RECEIVER__ */