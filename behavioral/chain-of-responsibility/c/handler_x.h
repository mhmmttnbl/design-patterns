/**
 * @file oop/behavioral/chain-of-responsibility/c/handler_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_CHAIN_OF_RESPONSIBILITY_HANDLER_X__
#define __OOP_CHAIN_OF_RESPONSIBILITY_HANDLER_X__

#include "handler.h"

struct Handler_x
{
  struct Handler _M_base;
};

void* Handler_x_init();

#endif /* !__OOP_CHAIN_OF_RESPONSIBILITY_HANDLER_X__ */