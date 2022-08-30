/**
 * @file oop/behavioral/visitor/cpp/visitor.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_VISITOR_BASE__
#define __OOP_VISITOR_BASE__

class Element;

class Visitor
{
public:
  virtual
  ~Visitor() = default;
public:
  virtual void
  visit_x(Element *__obj) = 0;

  virtual void
  visit_y(Element *__obj) = 0;
};

#endif /* !__OOP_VISITOR_BASE__ */