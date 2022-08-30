/**
 * @file oop/behavioral/iterator/cpp/iterator.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_ITERATOR_BASE__
#define __OOP_ITERATOR_BASE__

template<class _Tp>
class Iterator
{
public:
  virtual 
  ~Iterator() = default;
public:
  virtual void 
  first() = 0;
  
  virtual void
  next() = 0;
  
  virtual bool
  is_done() const = 0;
  
  virtual _Tp
  current() const = 0;
};

#endif /* !__OOP_ITERATOR_BASE__ */