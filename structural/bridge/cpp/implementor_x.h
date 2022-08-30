/**
 * @file oop/structural/bridge/cpp/implementor_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_BRIDGE_IMPLEMENTOR_X__
#define __OOP_BRIDGE_IMPLEMENTOR_X__

#include "implementor.h"

class _Implementor_x_impl;
class Implementor_x
  : public Implementor
{
public:
  Implementor_x();
public:
  void
  operation() override;
private:
  _Implementor_x_impl *_M_impl;
};

#endif /* !__OOP_BRIDGE_IMPLEMENTOR_X__ */