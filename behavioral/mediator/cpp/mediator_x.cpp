/**
 * @file oop/behavioral/mediator/cpp/mediator_x.cpp
 * @author TONBUL, Muhammet
 */

#include <list>

#include "mediator_x.h"
#include "colleague.h"

class _Mediator_x_impl
{
public:
  void
  _M_publish(const char *__x, Colleague *__obj)
  {
    for (auto __it : _M_pool) {
      if (__it != __obj)
        __it->receive(__x);
    }
  }

  void
  _M_subscribe(Colleague *__obj)
  { _M_pool.push_back(__obj); }
private:
  std::list<Colleague*> _M_pool;
};

Mediator_x
  ::Mediator_x()
    : _M_impl(new _Mediator_x_impl)
{}

void
Mediator_x
  ::publish(const char *__x, Colleague *__obj)
{ _M_impl->_M_publish(__x, __obj); }

void
Mediator_x
  ::subscribe(Colleague *__obj)
{ _M_impl->_M_subscribe(__obj); }