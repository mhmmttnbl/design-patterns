/**
 * @file oop/structural/facade/c/system_x.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>
#include <stdlib.h>

#include "system_x.h"

static void
System_x_operation()
{ printf("Operation by System_x\n"); }

static void
System_x_ctor(struct System_x *__this)
{ __this->operation = System_x_operation; }

void* 
System_x_init()
{
  struct System_x *__this = malloc(sizeof(*__this));

  System_x_ctor(__this);

  return(__this);
}