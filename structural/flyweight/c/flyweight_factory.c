/**
 * @file oop/structural/flyweight/c/flyweight_factory.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "flyweight_factory.h"
#include "flyweight_x.h"

static struct Flyweight*
Flyweight_factory_get(struct Flyweight_factory *__this,
                      char                      __x)
{
  if (__this->_M_pool[__x] == NULL)
    __this->_M_pool[__x] = Flyweight_x_init(__x);

  return(__this->_M_pool[__x]);
}

static void
Flyweight_factory_ctor(struct Flyweight_factory *__this)
{ 
  __this->get = Flyweight_factory_get;

  for (int __i = 0; __i < sizeof(__this->_M_pool) 
    / sizeof(__this->_M_pool[0]); ++__i)
    __this->_M_pool[__i] = NULL;
}

void*
Flyweight_factory_init()
{
  struct Flyweight_factory *__this = malloc(sizeof(*__this));

  Flyweight_factory_ctor(__this);

  return(__this);
}