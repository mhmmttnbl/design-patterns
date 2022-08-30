/**
 * @file oop/behavioral/visitor/cpp/element.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_VISITOR_ELEMENT__
#define __OOP_VISITOR_ELEMENT__

class Visitor;

class Element
{
public:
  virtual
  ~Element() = default;
public:
  virtual void
  accept(Visitor *__obj) = 0;
public:
  virtual void 
  operation_x() {}

  virtual void 
  operation_y() {}
};

#endif /* !__OOP_VISITOR_ELEMENT__ */