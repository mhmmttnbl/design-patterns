/**
 * @file oop/behavioral/iterator/cpp/aggregate_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_ITERATOR_AGGREGATE_X__
#define __OOP_ITERATOR_AGGREGATE_X__

#include "aggregate.h"

template<class _Tp>
class _Aggregate_x_impl;

template<class _Tp>
class Aggregate_x
  : public Aggregate<_Tp>
{
public:
  Aggregate_x();
public:
  Iterator<_Tp>*
  create_iterator() override;

  void
  append(const _Tp& __x) override;

  _Tp
  get(int __x) override;

  int
  count() override;
private:
  _Aggregate_x_impl<_Tp> *_M_impl;
};

#include "aggregate_x.inl"

#endif /* !__OOP_ITERATOR_AGGREGATE_X__ */