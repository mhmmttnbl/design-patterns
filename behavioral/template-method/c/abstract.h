/**
 * @file oop/behavioral/template-method/c/abstract.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_TEMPLATE_METHOD_ABSTRACT__
#define __OOP_TEMPLATE_METHOD_ABSTRACT__

struct Abstract_vt;
struct Abstract
{
  const struct Abstract_vt *_M_vt;

  void (*template_method)(struct Abstract *__this);
};

struct Abstract_vt
{
  void (*primitive_operation_x)();
  void (*primitive_operation_y)();
};

static inline void
Abstract_primitive_operation_x(struct Abstract *__this)
{ __this->_M_vt->primitive_operation_x(); }

static inline void
Abstract_primitive_operation_y(struct Abstract *__this)
{ __this->_M_vt->primitive_operation_y(); }

void* Abstract_init();

#endif /* !__OOP_TEMPLATE_METHOD_ABSTRACT__ */