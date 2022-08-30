/**
 * @file oop/structural/adapter/cpp/adaptee.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_ADAPTER_ADAPTEE__
#define __OOP_ADAPTER_ADAPTEE__

class _Adaptee_impl;
class Adaptee
{
public:
  Adaptee();
public:
  void
  specific_request();
private:
  _Adaptee_impl *_M_impl;
};

#endif /* !__OOP_ADAPTER_ADAPTEE__ */