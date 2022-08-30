/**
 * @file oop/structural/bridge/c/implementor.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_BRIDGE_IMPLEMENTOR__
#define __OOP_BRIDGE_IMPLEMENTOR__

struct Implementor_vt;
struct Implementor
{
  const struct Implementor_vt *_M_vt;
};

struct Implementor_vt
{
  void (*operation)();
};

static inline void
Implementor_operation(struct Implementor *__this)
{ __this->_M_vt->operation(); }

#endif /* !__OOP_BRIDGE_IMPLEMENTOR__*/