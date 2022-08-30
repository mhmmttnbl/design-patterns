/**
 * @file oop/behavioral/mediator/c/mediator.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_MEDIATOR_BASE__
#define __OOP_MEDIATOR_BASE__

struct Colleague;

struct Mediator_vt;
struct Mediator
{
  const struct Mediator_vt *_M_vt;
};

struct Mediator_vt
{
  void (*publish)(struct Mediator *__this, const char *__x, 
                  struct Colleague *__obj);
};

static inline void
Mediator_publish(struct Mediator *__this, const char *__x, 
                 struct Colleague *__obj)
{ __this->_M_vt->publish(__this, __x, __obj); }

#endif /* !__OOP_MEDIATOR_BASE__ */