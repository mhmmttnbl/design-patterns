/**
 * @file oop/structural/adapter/c/adapter.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_ADAPTER_BASE__
#define __OOP_ADAPTER_BASE__

#include "target.h"

struct Adapter
{
  struct Target _M_base;
};

void* Adapter_init();

#endif /* !__OOP_ADAPTER_BASE__ */