/**
 * @file oop/behavioral/observer/cpp/subject.cpp
 * @author TONBUL, Muhammet
 */

#include <list>

#include "observer.h"
#include "subject.h"

class _Subject_impl
{
public:
  void
  _M_attach(Observer *__obj)
  { _M_pool.push_back(__obj); }

  void
  _M_detach(Observer *__obj)
  { _M_pool.remove(__obj); }

  void
  _M_notify(Subject *__this)
  {
    for (auto __it : _M_pool)
      __it->update(__this);
  }

  void
  _M_set(int __x)
  { _M_x = __x; }

  int
  _M_get()
  { return(_M_x); }
private:
  std::list<Observer*> _M_pool;
  int _M_x;
};

Subject
  ::Subject()
    : _M_impl(new _Subject_impl)
{}

Subject
  ::~Subject()
{}

void
Subject
  ::attach(Observer *__obj)
{ _M_impl->_M_attach(__obj); }

void
Subject
  ::detach(Observer *__obj)
{ _M_impl->_M_detach(__obj); }

void
Subject
  ::notify()
{ _M_impl->_M_notify(this); }

void
Subject
  ::set(int __x)
{ _M_impl->_M_set(__x); }

int
Subject
  ::get()
{ _M_impl->_M_get(); }