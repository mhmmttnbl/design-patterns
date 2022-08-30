/**
 * @file oop/behavioral/iterator/cpp/aggregate.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_ITERATOR_AGGREGATE__
#define __OOP_ITERATOR_AGGREGATE__

template<class _Tp>
class Iterator;

template<class _Tp>
class Aggregate
{
public:
  virtual
  ~Aggregate() = default;
public:
  virtual Iterator<_Tp>*
  create_iterator() = 0;

  virtual void
  append(const _Tp& __x) = 0;

  virtual _Tp
  get(int __x) = 0;
  
  virtual int
  count() = 0;
};

#endif /* !__OOP_ITERATOR_AGGREGATE__ */