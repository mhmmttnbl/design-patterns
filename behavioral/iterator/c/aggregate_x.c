/**
 * @file oop/behavioral/iterator/c/aggregate_x.c
 * @author TONBUL, Muhammet
 */

#include <stdlib.h>

#include "aggregate_x.h"
#include "iterator_x.h"

static struct Iterator*
Aggregate_x_create_iterator(struct Aggregate *__this)
{ return(Iterator_x_init(__this)); }

static void
Aggregate_x_append(struct Aggregate_x *__this, Data __x)
{ __this->_M_pool[__this->_M_size++] = __x; }

static Data
Aggregate_x_get(struct Aggregate_x *__this, int __x)
{ return(__this->_M_pool[__x]); }

static int
Aggregate_x_count(struct Aggregate_x *__this)
{ return(__this->_M_size); }

static void
Aggregate_x_ctor(struct Aggregate_x *__this)
{
  /* Aliases for base method signatures. */
  typedef struct Iterator* (*__Base_create_iterator)(struct Aggregate*);
  typedef void (*__Base_append)(struct Aggregate*, Data);
  typedef Data (*__Base_get)(struct Aggregate*, int);
  typedef int (*__Base_count)(struct Aggregate*);

  /* Casting is required to match base class method signatures. */
  static struct Aggregate_vt __vt = {
    .create_iterator = (__Base_create_iterator)Aggregate_x_create_iterator,
    .append = (__Base_append)Aggregate_x_append,
    .get = (__Base_get)Aggregate_x_get,
    .count = (__Base_count)Aggregate_x_count
  };

  __this->_M_base._M_vt = &__vt;
  __this->_M_size = 0;
}

void*
Aggregate_x_init()
{
  struct Aggregate_x *__this = malloc(sizeof(*__this));

  Aggregate_x_ctor(__this);

  return(__this);
}