/**
 * @file oop/structural/proxy/c/proxy.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_PROXY_BASE__
#define __OOP_PROXY_BASE__

#include "subject_x.h"

struct Proxy
{
  struct Subject _M_base;
};

void* Proxy_init();

#endif /* !__OOP_PROXY_BASE__ */