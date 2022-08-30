/**
 * @file oop/structural/flyweight/cpp/flyweight_factory.cpp
 * @author TONBUL, Muhammet
 */

#include <map>

#include "flyweight_factory.h"
#include "flyweight_x.h"

class _Flyweight_factory_impl
{
public:
  Flyweight*
  _M_get(char __x)
  {
    if (_M_pool.find(__x) == _M_pool.end()) { 
      _M_pool.insert(std::make_pair(
        __x, new Flyweight_x(__x)));
    }

    return(_M_pool[__x]);
  }
private:
  std::map<char, Flyweight*> _M_pool;
};

Flyweight_factory
  ::Flyweight_factory()
    : _M_impl(new _Flyweight_factory_impl)
{}

Flyweight*
Flyweight_factory
  ::get(char __x)
{ return(_M_impl->_M_get(__x)); }