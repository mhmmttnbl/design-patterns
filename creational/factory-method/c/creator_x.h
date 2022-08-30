/**
 * @file oop/creational/factory-method/c/creator_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_FACTORY_CREATOR_X__
#define __OOP_FACTORY_CREATOR_X__

#include "creator.h"

struct Creator_x
{
  struct Creator _M_base;
};

void* Creator_x_init();

#endif /* !__OOP_FACTORY_CREATOR_X__ */