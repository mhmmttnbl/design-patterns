/**
 * @file oop/behavioral/visitor/c/object_structure.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_VISITOR_OBJECT_STRUCTURE__
#define __OOP_VISITOR_OBJECT_STRUCTURE__

struct Visitor;
struct Element;

struct Object_structure
{
  void (*append)(struct Object_structure *__this, 
                 struct Element          *__obj);
  void (*remove)(struct Object_structure *__this, 
                 struct Element          *__obj);
  void (*accept)(struct Object_structure *__this, 
                 struct Visitor          *__obj);

  struct Element *_M_pool[128];
  int             _M_size;
};

void* Object_structure_init();

#endif /* !__OOP_VISITOR_OBJECT_STRUCTURE__ */