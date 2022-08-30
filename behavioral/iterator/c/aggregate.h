/**
 * @file oop/behavioral/iterator/c/aggregate.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_ITERATOR_AGGREGATE__
#define __OOP_ITERATOR_AGGREGATE__

#include "type.h"

struct Aggregate_vt;
struct Aggregate
{
  const struct Aggregate_vt *_M_vt;
};

struct Aggregate_vt
{
  struct Iterator* (*create_iterator)(struct Aggregate *__this);
  void (*append)(struct Aggregate *__this, Data __x);
  Data (*get)(struct Aggregate *__this, int __x);
  int (*count)(struct Aggregate *__this);
};

static inline struct Iterator*
Aggregate_create_iterator(struct Aggregate *__this)
{ return(__this->_M_vt->create_iterator(__this)); }

static inline void
Aggregate_append(struct Aggregate *__this, Data __x)
{ __this->_M_vt->append(__this, __x); }

static inline Data
Aggregate_get(struct Aggregate *__this, int __x)
{ return(__this->_M_vt->get(__this, __x)); }

static inline int
Aggregate_count(struct Aggregate *__this)
{ return(__this->_M_vt->count(__this)); }

#endif /* !__OOP_ITERATOR_AGGREGATE__ */