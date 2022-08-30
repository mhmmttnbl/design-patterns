/**
 * @file oop/structural/facade/cpp/system_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_FACADE_SYSTEM_X__
#define __OOP_FACADE_SYSTEM_X__

class _System_x_impl;
class System_x
{
public:
  System_x();
public:
  void
  operation();
private:
  _System_x_impl *_M_impl;
};

#endif /* !__OOP_FACADE_SYSTEM_X__ */