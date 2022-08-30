/**
 * @file oop/structural/facade/cpp/system_y.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_FACADE_SYSTEM_Y__
#define __OOP_FACADE_SYSTEM_Y__

class _System_y_impl;
class System_y
{
public:
  System_y();
public:
  void
  operation();
private:
  _System_y_impl *_M_impl;
};

#endif /* !__OOP_FACADE_SYSTEM_Y__ */