/**
 * @file oop/structural/bridge/cpp/implementor_y.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_BRIDGE_IMPLEMENTOR_Y__
#define __OOP_BRIDGE_IMPLEMENTOR_Y__

#include "implementor.h"

class _Implementor_y_impl;
class Implementor_y
  : public Implementor
{
public:
  Implementor_y();
public:
  void
  operation() override;
private:
  _Implementor_y_impl *_M_impl;
};

#endif /* !__OOP_BRIDGE_IMPLEMENTOR_Y__ */