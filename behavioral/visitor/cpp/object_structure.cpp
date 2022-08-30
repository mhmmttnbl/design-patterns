/**
 * @file oop/behavioral/visitor/cpp/object_structure.cpp
 * @author TONBUL, Muhammet
 */

#include <list>

#include "object_structure.h"
#include "element.h"
#include "visitor.h"

class _Object_structure_impl
{
public:
  void
  _M_append(Element *__obj)
  { _M_pool.push_back(__obj); }

  void
  _M_remove(Element *__obj)
  { _M_pool.remove(__obj); }

  void
  _M_accept(Visitor *__obj)
  {     
    for (auto __it : _M_pool)
      __it->accept(__obj);
  }
private:
  std::list<Element*> _M_pool;
};

Object_structure
  ::Object_structure()
    : _M_impl(new _Object_structure_impl)
{}

void
Object_structure
  ::append(Element *__obj)
{ _M_impl->_M_append(__obj); }

void
Object_structure
  ::remove(Element *__obj)
{ _M_impl->_M_remove(__obj); }

void
Object_structure
  ::accept(Visitor *__obj)
{ _M_impl->_M_accept(__obj); }