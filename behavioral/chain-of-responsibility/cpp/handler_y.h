/**
 * @file oop/behavioral/chain-of-responsibility/cpp/handler_y.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_CHAIN_OF_RESPONSIBILITY_HANDLER_Y__
#define __OOP_CHAIN_OF_RESPONSIBILITY_HANDLER_Y__

#include "handler.h"

class _Handler_y_impl;
class Handler_y
  : public Handler
{
public:
  Handler_y();
public:
  void
  handle_request(char __x) override;
private:
  _Handler_y_impl *_M_impl;
};

#endif /* !__OOP_CHAIN_OF_RESPONSIBILITY_HANDLER_Y__ */