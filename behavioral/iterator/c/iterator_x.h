/**
 * @file oop/behavioral/iterator/c++/iterator_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_ITERATOR_X__
#define __OOP_ITERATOR_X__

#include "iterator.h"

struct Aggregate;

struct Iterator_x
{
  struct Iterator   _M_base;
  struct Aggregate *_M_obj;
  Data              _M_x;
};

void* Iterator_x_init(struct Aggregate *__obj);

#endif /* !__OOP_ITERATOR_X__ */