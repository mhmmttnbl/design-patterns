/**
 * @file oop/behavioral/command/c/receiver.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_COMMAND_RECEIVER__
#define __OOP_COMMAND_RECEIVER__

struct Receiver
{
  void (*action)(const char *__x);
};

void* Receiver_init();

#endif /* !__OOP_COMMAND_RECEIVER__ */