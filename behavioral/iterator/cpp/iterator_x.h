/**
 * @file oop/behavioral/iterator/cpp/iterator_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_ITERATOR_X__
#define __OOP_ITERATOR_X__

#include "iterator.h"

template<class _Tp>
class Aggregate;

template<class _Tp>
class _Iterator_x_impl;

template<class _Tp>
class Iterator_x
  : public Iterator<_Tp>
{
public:
  Iterator_x(Aggregate<_Tp> *__obj);
public:
  void 
  first() override;
  
  void
  next() override;
  
  bool
  is_done() const override;
  
  _Tp
  current() const override;
private:
  _Iterator_x_impl<_Tp> *_M_impl;
};

#include "iterator_x.inl"

#endif /* !__OOP_ITERATOR_X__ */