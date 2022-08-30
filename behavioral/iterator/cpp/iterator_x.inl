/**
 * @file oop/behavioral/iterator/cpp/iterator_x.inl
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "aggregate.h"

template<class _Tp>
class _Iterator_x_impl
{
public:
  _Iterator_x_impl(Aggregate<_Tp> *__obj)
    : _M_obj(__obj),
    _M_x(0)
  {}
public:
  void 
  _M_first()
  { _M_x = 0; }
  
  void
  _M_next()
  { _M_x++; }
  
  bool
  _M_is_done() const
  { return(_M_x >= _M_obj->count()); }
  
  _Tp
  _M_current() const
  { return(_M_obj->get(_M_x)); }
private:
  Aggregate<_Tp> *_M_obj;
  int _M_x;
};

template<class _Tp>
Iterator_x<_Tp>
  ::Iterator_x(Aggregate<_Tp> *__obj)
    : _M_impl(new _Iterator_x_impl<_Tp>(__obj))
{}

template<class _Tp>
void Iterator_x<_Tp>
  ::first()
{ _M_impl->_M_first(); }

template<class _Tp>
void Iterator_x<_Tp>
  ::next()
{ _M_impl->_M_next(); }

template<class _Tp>
bool Iterator_x<_Tp>
  ::is_done() const
{ return(_M_impl->_M_is_done()); }

template<class _Tp>
_Tp Iterator_x<_Tp>
  ::current() const
{ return(_M_impl->_M_current()); }