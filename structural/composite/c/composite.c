/**
 * @file oop/structural/composite/c/composite.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "composite.h"

static void
Composite_operation(struct Composite *__this)
{
  for (int __i = 0; __i < __this->_M_size; ++__i) {
    if (__this->_M_pool[__i])
      Component_operation(__this->_M_pool[__i]);
  }
}

static void 
Composite_append(struct Composite *__this, 
                 struct Component *__obj)
{ __this->_M_pool[__this->_M_size++] = __obj; }

static void 
Composite_remove(struct Composite *__this, 
                 struct Component *__obj)
{
  for (int __i = 0; __i < __this->_M_size; ++__i) {
    void *__tmp = __this->_M_pool[__i];
    
    if (__tmp == __obj) {
      free(__tmp); __this->_M_pool[__i] = NULL;
    }
  }
}

static void
Composite_ctor(struct Composite *__this)
{
  /* Aliases for base method signatures. */
  typedef void (*__Base_operation)(struct Component *__this);

  /* Casting is required to match base class method signatures. */
  static struct Component_vt __vt = {
    .operation = (__Base_operation)Composite_operation
  };

  __this->_M_base._M_vt = &__vt;
  __this->_M_size = 0;
  __this->operation = (__Base_operation)Composite_operation;
  __this->append = Composite_append;
  __this->remove = Composite_remove; 
}

void*
Composite_init()
{
  struct Composite *__this = malloc(sizeof(*__this));

  Composite_ctor(__this);

  return(__this);
}