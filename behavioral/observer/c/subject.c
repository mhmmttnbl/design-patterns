/**
 * @file oop/behavioral/observer/c/subject.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>
#include <stdlib.h>

#include "subject.h"
#include "observer.h"

static void
Subject_attach(struct Subject *__this, 
               struct Observer *__obj)
{ __this->_M_pool[__this->_M_size++] = __obj; }

static void
Subject_detach(struct Subject *__this,
               struct Observer *__obj)
{
  for (int __i = 0; __i < __this->_M_size; ++__i) {
    void *__tmp = __this->_M_pool[__i];
    
    if (__tmp == __obj) {
      free(__tmp); __this->_M_pool[__i] = NULL;
    }
  }
}

static void
Subject_notify(struct Subject *__this)
{
  for (int __i = 0; __i < __this->_M_size; ++__i) {
    if (__this->_M_pool[__i] != NULL)
      Observer_update(__this->_M_pool[__i], __this);
  }
}

static void
Subject_set(struct Subject *__this, int __x)
{ __this->_M_x = __x; }

static int
Subject_get(struct Subject *__this)
{ return(__this->_M_x); }

static void
Subject_ctor(struct Subject *__this)
{
  __this->attach = Subject_attach;
  __this->detach = Subject_detach;
  __this->notify = Subject_notify;
  __this->set = Subject_set;
  __this->get = Subject_get;
  __this->_M_size = 0;
}

void*
Subject_init()
{
  struct Subject *__this = malloc(sizeof(*__this));

  Subject_ctor(__this);

  return(__this);
}