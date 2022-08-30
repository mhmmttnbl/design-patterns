/**
 * @file oop/creational/builder/c/director.c
 * @author TONBUL, Muhammet
 */

#include <stdlib.h>

#include "director.h"
#include "builder.h"

static void
Director_construct(struct Builder *__obj)
{
  Builder_build_product_x(__obj);
  Builder_build_product_y(__obj);
}

static void
Director_ctor(struct Director *__this)
{ __this->construct = Director_construct; }

void*
Director_init()
{
  struct Director *__this = malloc(sizeof(*__this));

  Director_ctor(__this);

  return(__this);
}