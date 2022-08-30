/**
 * @file oop/behavioral/iterator/c/aggregate_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_ITERATOR_AGGREGATE_X__
#define __OOP_ITERATOR_AGGREGATE_X__

#include "aggregate.h"

struct Aggregate_x
{
  struct Aggregate _M_base;
  Data             _M_pool[128];
  int              _M_size;
};

void* Aggregate_x_init();

#endif /* !__OOP_ITERATOR_AGGREGATE_X__ */