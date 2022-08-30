/**
 * @file oop/behavioral/chain-of-responsibility/c/handler.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_CHAIN_OF_RESPONSIBILITY_HANDLER__
#define __OOP_CHAIN_OF_RESPONSIBILITY_HANDLER__

struct Handler_vt;
struct Handler
{
  const struct Handler_vt *_M_vt;
  struct Handler          *_M_obj;
};

struct Handler_vt
{
  void (*handle_request)(struct Handler *__this, char __x);
  void (*next)(struct Handler *__this, struct Handler *__obj);
};

static inline void
Handler_handle_request(struct Handler *__this, char __x)
{ __this->_M_vt->handle_request(__this, __x); }

static inline void 
Handler_next(struct Handler *__this, struct Handler *__obj)
{ __this->_M_vt->next(__this, __obj); }

#endif /* !__OOP_CHAIN_OF_RESPONSIBILITY_HANDLER__ */