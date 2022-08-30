/**
 * @file oop/behavioral/chain-of-responsibility/cpp/handler.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_CHAIN_OF_RESPONSIBILITY_HANDLER__
#define __OOP_CHAIN_OF_RESPONSIBILITY_HANDLER__

class _Handler_impl;
class Handler
{
public:
  Handler();

  virtual
  ~Handler();
public:
  virtual void
  handle_request(char __x);

  void
  next(Handler *__obj);
protected:
  Handler*
  get();
private:
  _Handler_impl *_M_impl;
};

#endif /* !__OOP_CHAIN_OF_RESPONSIBILITY_HANDLER__ */