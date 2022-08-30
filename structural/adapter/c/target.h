/**
 * @file oop/structural/adapter/c/target.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_ADAPTER_TARGET__
#define __OOP_ADAPTER_TARGET__

struct Target_vt;
struct Target
{
  const struct Target_vt *_M_vt;
};

struct Target_vt
{
  void (*request)();
};

static inline void
Target_request(struct Target *__this)
{ __this->_M_vt->request(); }

#endif /* !__OOP_ADAPTER_TARGET__ */