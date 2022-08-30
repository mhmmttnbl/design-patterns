/**
 * @file oop/structural/adapter/c/adaptee.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_ADAPTER_ADAPTEE__
#define __OOP_ADAPTER_ADAPTEE__

struct Adaptee
{
  void (*specific_request)();
};

void* Adaptee_init();

#endif /* !__OOP_ADAPTER_ADAPTEE__ */