/**
 * @file oop/behavioral/visitor/c/visitor.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_VISITOR_BASE__
#define __OOP_VISITOR_BASE__

struct Element;

struct Visitor_vt;
struct Visitor
{
  const struct Visitor_vt *_M_vt;
};

struct Visitor_vt
{
  void (*visit_x)(struct Element *__obj);
  void (*visit_y)(struct Element *__obj);
};

static inline void
Visitor_visit_x(struct Visitor *__this, struct Element *__obj)
{ __this->_M_vt->visit_x(__obj); }

static inline void
Visitor_visit_y(struct Visitor *__this, struct Element *__obj)
{ __this->_M_vt->visit_y(__obj); }

#endif /* !__OOP_VISITOR_BASE__ */