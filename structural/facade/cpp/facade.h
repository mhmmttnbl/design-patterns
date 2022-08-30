/**
 * @file oop/structural/facade/cpp/facade.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_FACADE_BASE__
#define __OOP_FACADE_BASE__

class _Facade_impl;
class Facade
{
public:
  Facade();
public:
  void
  operation_x();

  void
  operation_y();
private:
  _Facade_impl *_M_impl;
};

#endif /* !__OOP_FACADE_BASE__ */