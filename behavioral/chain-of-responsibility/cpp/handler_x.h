/**
 * @file oop/behavioral/chain-of-responsibility/cpp/handler_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_CHAIN_OF_RESPONSIBILITY_HANDLER_X__
#define __OOP_CHAIN_OF_RESPONSIBILITY_HANDLER_X__

#include "handler.h"

class _Handler_x_impl;
class Handler_x
  : public Handler
{
public:
  Handler_x();
public:
  void
  handle_request(char __x) override;
private:
  _Handler_x_impl *_M_impl;
};

#endif /* !__OOP_CHAIN_OF_RESPONSIBILITY_HANDLER_X__ */