/**
 * @file oop/structural/composite/c/component.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_COMPOSITE_COMPONENT__
#define __OOP_COMPOSITE_COMPONENT__

struct Component_vt;
struct Component
{
  const struct Component_vt *_M_vt;
};

struct Component_vt
{
  void (*operation)(struct Component *__this);
};

static inline void
Component_operation(struct Component *__this)
{ __this->_M_vt->operation(__this); }

#endif /* !__OOP_COMPOSITE_COMPONENT__ */