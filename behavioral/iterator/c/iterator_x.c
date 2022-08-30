/**
 * @file oop/behavioral/iterator/c/iterator_x.c
 * @author TONBUL, Muhammet
 */

#include <stdlib.h>

#include "iterator_x.h"
#include "aggregate.h"

static void
Iterator_x_first(struct Iterator_x *__this)
{ __this->_M_x = 0; }

static void
Iterator_x_next(struct Iterator_x *__this)
{ __this->_M_x++; }

static int
Iterator_x_is_done(struct Iterator_x *__this)
{ return(__this->_M_x >= Aggregate_count(__this->_M_obj)); }

static Data
Iterator_x_current(struct Iterator_x *__this)
{ return(Aggregate_get(__this->_M_obj, __this->_M_x)); }

static void
Iterator_x_ctor(struct Iterator_x *__this, struct Aggregate *__obj)
{
  /* Aliases for base method signatures. */
  typedef void (*__Base_first)(struct Iterator*);
  typedef void (*__Base_next)(struct Iterator*);
  typedef int (*__Base_is_done)(struct Iterator*);
  typedef Data (*__Base_current)(struct Iterator*);

  /* Casting is required to match base class method signatures. */
  static struct Iterator_vt __vt = {
    .first = (__Base_first)Iterator_x_first,
    .next = (__Base_next)Iterator_x_next,
    .is_done = (__Base_is_done)Iterator_x_is_done,
    .current = (__Base_current)Iterator_x_current
  };

  __this->_M_base._M_vt = &__vt;
  __this->_M_obj = __obj;
  __this->_M_x = 0;
}

void*
Iterator_x_init(struct Aggregate *__obj)
{
  struct Iterator_x *__this = malloc(sizeof(*__this));

  Iterator_x_ctor(__this, __obj);

  return(__this);
}