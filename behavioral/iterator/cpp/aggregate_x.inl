/**
 * @file oop/behavioral/iterator/cpp/aggregate_x.inl
 * @author TONBUL, Muhammet
 */

#include <vector>

#include "iterator_x.h"

template<class _Tp>
class _Aggregate_x_impl
{
public:
  Iterator<_Tp>*
  _M_create_iterator(Aggregate_x<_Tp> *__this)
  { return(new Iterator_x<_Tp>(__this)); }

  void
  _M_append(const _Tp& __x)
  { _M_v.push_back(__x); }

  _Tp
  _M_get(int __x)
  { return(_M_v[__x]); }

  int
  _M_count()
  { return(_M_v.size()); }
private:
  std::vector<_Tp> _M_v;
};

template<class _Tp>
Aggregate_x<_Tp>
  ::Aggregate_x()
    : _M_impl(new _Aggregate_x_impl<_Tp>)
{}

template<class _Tp>
Iterator<_Tp>* Aggregate_x<_Tp>
  ::create_iterator()
{ return(_M_impl->_M_create_iterator(this)); }

template<class _Tp>
void Aggregate_x<_Tp>
  ::append(const _Tp& __x)
{ return(_M_impl->_M_append(__x)); }

template<class _Tp>
_Tp Aggregate_x<_Tp>
  ::get(int __x)
{ return(_M_impl->_M_get(__x)); }

template<class _Tp>
int Aggregate_x<_Tp>
  ::count()
{ return(_M_impl->_M_count()); }