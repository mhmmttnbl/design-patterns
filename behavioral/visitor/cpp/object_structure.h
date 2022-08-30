/**
 * @file oop/behavioral/visitor/cpp/object_structure.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_VISITOR_OBJECT_STRUCTURE__
#define __OOP_VISITOR_OBJECT_STRUCTURE__

class Visitor;
class Element;

class _Object_structure_impl;
class Object_structure
{
public:
  Object_structure();
public:
  void
  append(Element *__obj);

  void
  remove(Element *__obj);

  void
  accept(Visitor *__obj);
private:
  _Object_structure_impl *_M_impl;
};

#endif /* !__OOP_VISITOR_OBJECT_STRUCTURE__ */