/**
 * @file oop/behavioral/template-method/c/abstract.c
 * @author TONBUL, Muhammet
 */

#include <stdlib.h>

#include "abstract.h"

static void
Abstract_template_method(struct Abstract *__this)
{
  Abstract_primitive_operation_x(__this);
  Abstract_primitive_operation_y(__this);
}

static void
Abstract_ctor(struct Abstract *__this)
{ __this->template_method = Abstract_template_method; }

void*
Abstract_init()
{
  struct Abstract *__this = malloc(sizeof(*__this));

  Abstract_ctor(__this);

  return(__this);
}