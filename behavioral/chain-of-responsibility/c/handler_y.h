/**
 * @file oop/behavioral/chain-of-responsibility/c/handler_y.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_CHAIN_OF_RESPONSIBILITY_HANDLER_Y__
#define __OOP_CHAIN_OF_RESPONSIBILITY_HANDLER_Y__

#include "handler.h"

struct Handler_y
{
  struct Handler _M_base;
};

void* Handler_y_init();

#endif /* !__OOP_CHAIN_OF_RESPONSIBILITY_HANDLER_Y__ */