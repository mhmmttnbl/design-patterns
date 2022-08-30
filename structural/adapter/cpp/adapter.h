/**
 * @file oop/structural/adapter/cpp/adapter.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_ADAPTER_BASE__
#define __OOP_ADAPTER_BASE__

#include "target.h"

class _Adapter_impl;
class Adapter
  : public Target
{
public:
  Adapter();
public:
  void
  request() override;
private:
  _Adapter_impl *_M_impl;
};

#endif /* !__OOP_ADAPTER_BASE__ */