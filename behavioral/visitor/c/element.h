/**
 * @file oop/behavioral/visitor/c/element.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_VISITOR_ELEMENT__
#define __OOP_VISITOR_ELEMENT__

struct Visitor;

struct Element_vt;
struct Element
{
  const struct Element_vt *_M_vt;
};

struct Element_vt
{
  void (*accept)(struct Element *__this, struct Visitor *__obj);
  void (*operation_x)();
  void (*operation_y)();
};

static inline void
Element_accept(struct Element *__this, struct Visitor *__obj)
{ __this->_M_vt->accept(__this, __obj); }

static inline void
Element_operation_x(struct Element *__this)
{ __this->_M_vt->operation_x(); }

static inline void
Element_operation_y(struct Element *__this)
{ __this->_M_vt->operation_y(); }

#endif /* !__OOP_VISITOR_ELEMENT__ */