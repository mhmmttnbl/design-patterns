/**
 * @file oop/behavioral/iterator/c/iterator.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_ITERATOR_BASE__
#define __OOP_ITERATOR_BASE__

#include "type.h"

struct Iterator_vt;
struct Iterator
{
  const struct Iterator_vt *_M_vt;
};

struct Iterator_vt
{
  void (*first)(struct Iterator *__this);
  void (*next)(struct Iterator *__this);
  int (*is_done)(struct Iterator *__this);
  Data (*current)(struct Iterator *__this);
};

static inline void
Iterator_first(struct Iterator *__this)
{ __this->_M_vt->first(__this); }

static inline void
Iterator_next(struct Iterator *__this)
{ __this->_M_vt->next(__this); }

static inline int
Iterator_is_done(struct Iterator *__this)
{ return(__this->_M_vt->is_done(__this)); }

static inline Data
Iterator_current(struct Iterator *__this)
{ return(__this->_M_vt->current(__this)); }

#endif /* !__OOP_ITERATOR_BASE__ */