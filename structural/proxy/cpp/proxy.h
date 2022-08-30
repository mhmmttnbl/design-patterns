/**
 * @file oop/structural/proxy/cpp/proxy.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_PROXY_BASE__
#define __OOP_PROXY_BASE__

#include "subject.h"

class _Proxy_impl;
class Proxy
  : public Subject
{
public:
  Proxy();
public:
  void
  request() override;
private:
  _Proxy_impl *_M_impl;
};

#endif /* !__OOP_PROXY_BASE__ */