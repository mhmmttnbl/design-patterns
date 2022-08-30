/**
 * @file oop/behavioral/mediator/c/colleague.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_MEDIATOR_COLLEAGUE__
#define __OOP_MEDIATOR_COLLEAGUE__

struct Colleague_vt;
struct Colleague
{
  const struct Colleague_vt *_M_vt;
};

struct Colleague_vt
{
  void (*send)(struct Colleague *__this, const char *__x);
  void (*receive)(const char *__x);
};

static inline void
Colleague_send(struct Colleague *__this, const char *__x)
{ __this->_M_vt->send(__this, __x); }

static inline void
Colleague_receive(struct Colleague *__this, const char *__x)
{ __this->_M_vt->receive(__x); }

#endif /* !__OOP_MEDIATOR_COLLEAGUE__ */