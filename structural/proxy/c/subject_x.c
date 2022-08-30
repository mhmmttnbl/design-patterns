/**
 * @file oop/structural/proxy/c/subject_x.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>
#include <stdlib.h>

#include "subject_x.h"

static void
Subject_x_request()
{ printf("Request by Subject_x\n"); }

static void
Subject_x_ctor(struct Subject_x *__this)
{
  /* Casting to base class methods is not required. */
  static struct Subject_vt __vt = {
    .request = Subject_x_request
  };

  __this->_M_base._M_vt = &__vt;
}

void*
Subject_x_init()
{
  struct Subject_x *__this = malloc(sizeof(*__this));

  Subject_x_ctor(__this);

  return(__this);
}