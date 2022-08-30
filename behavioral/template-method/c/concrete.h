/**
 * @file oop/behavioral/template-method/c/concrete.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_TEMPLATE_METHOD_CONCRETE__
#define __OOP_TEMPLATE_METHOD_CONCRETE__

#include "abstract.h"

struct Concrete
{
  struct Abstract _M_base;
};

void* Concrete_init();

#endif /* !__OOP_TEMPLATE_METHOD_CONCRETE__ */