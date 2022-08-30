/**
 * @file oop/behavioral/command/c/invoker.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>
#include <stdlib.h>

#include "invoker.h"
#include "command.h"

static void
Invoker_operation(struct Invoker *__this)
{
  for (int __i = 0; __i < __this->_M_size; ++__i) {
    if (__this->_M_pool[__i])
      Command_execute(__this->_M_pool[__i]);
  }
}

static void
Invoker_append(struct Invoker *__this,
               struct Command *__obj)
{ __this->_M_pool[__this->_M_size++] = __obj; }

static void
Invoker_remove(struct Invoker *__this,
               struct Command *__obj)
{
  for (int __i = 0; __i < __this->_M_size; ++__i) {
    void *__tmp = __this->_M_pool[__i];
    
    if (__tmp == __obj) {
      free(__tmp); __this->_M_pool[__i] = NULL;
    }
  }
}

static void
Invoker_ctor(struct Invoker *__this)
{
  __this->operation = Invoker_operation;
  __this->append = Invoker_append;
  __this->remove = Invoker_remove;
  __this->_M_size = 0;
}

void*
Invoker_init()
{
  struct Invoker *__this = malloc(sizeof(*__this));

  Invoker_ctor(__this);

  return(__this);
}