/**
 * @file oop/behavioral/observer/c/observer.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_OBSERVER_BASE__
#define __OOP_OBSERVER_BASE__

struct Subject;

struct Observer_vt;
struct Observer
{
  const struct Observer_vt *_M_vt;
};

struct Observer_vt
{
  void (*update)(struct Subject *__obj);
};

static inline void
Observer_update(struct Observer *__this, struct Subject *__obj)
{ __this->_M_vt->update(__obj); }

#endif /* !__OOP_OBSERVER_BASE__ */