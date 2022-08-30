/**
 * @file oop/behavioral/visitor/c/visitor_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_VISITOR_X__
#define __OOP_VISITOR_X__

#include "visitor.h"

struct Visitor_x
{
  struct Visitor _M_base;
};

void* Visitor_x_init();

#endif /* !__OOP_VISITOR_X__ */