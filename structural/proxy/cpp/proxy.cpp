/**
 * @file oop/structural/proxy/cpp/proxy.cpp
 * @author TONBUL, Muhammet
 */

#include "proxy.h"
#include "subject_x.h"

class _Proxy_impl
{
public:
  _Proxy_impl()
    : _M_obj(nullptr)
  {}
public:
  void
  _M_request()
  {
    if (_M_obj == nullptr)
      _M_obj = new Subject_x;
    
    _M_obj->request();
  }
private:
  Subject_x *_M_obj;
};

Proxy
  ::Proxy()
    : _M_impl(new _Proxy_impl)
{}

void
Proxy
  ::request()
{ _M_impl->_M_request(); }