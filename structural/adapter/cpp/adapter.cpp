/**
 * @file oop/structural/adapter/cpp/adapter.cpp
 * @author TONBUL, Muhammet
 */

#include "adapter.h"
#include "adaptee.h"

class _Adapter_impl
{
public:
  _Adapter_impl()
    : _M_obj(new Adaptee)
  {}
public:
  void
  _M_request()
  { _M_obj->specific_request(); }
private:
  Adaptee *_M_obj;
};

Adapter
  ::Adapter()
    : _M_impl(new _Adapter_impl)
{}

void
Adapter
  ::request()
{ _M_impl->_M_request(); }