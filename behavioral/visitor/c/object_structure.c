/**
 * @file oop/behavioral/visitor/c/object_structure.c
 * @author TONBUL, Muhammet
 */

#include <stdlib.h>

#include "object_structure.h"
#include "element.h"
#include "visitor.h"

static void
Object_structure_append(struct Object_structure *__this, 
                        struct Element          *__obj)
{ __this->_M_pool[__this->_M_size++] = __obj; }

static void
Object_structure_remove(struct Object_structure *__this, 
                        struct Element          *__obj)
{
  for (int __i = 0; __i < __this->_M_size; ++__i) {
    void *__tmp = __this->_M_pool[__i];
    
    if (__tmp == __obj) {
      free(__tmp); __this->_M_pool[__i] = NULL;
    }
  }
}

static void
Object_structure_accept(struct Object_structure *__this, 
                        struct Visitor          *__obj)
{
  for (int __i = 0; __i < __this->_M_size; ++__i) {
    if (__this->_M_pool[__i] != NULL)
      Element_accept(__this->_M_pool[__i], __obj);
  }
}

static void
Object_structure_ctor(struct Object_structure *__this)
{
  __this->append = Object_structure_append;
  __this->remove = Object_structure_remove;
  __this->accept = Object_structure_accept;
  __this->_M_size = 0;
}

void* Object_structure_init()
{
  struct Object_structure *__this = malloc(sizeof(*__this));

  Object_structure_ctor(__this);

  return(__this);
}