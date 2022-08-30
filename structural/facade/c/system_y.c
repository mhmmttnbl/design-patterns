/**
 * @file oop/structural/facade/c/system_y.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>
#include <stdlib.h>

#include "system_y.h"

static void
System_y_operation()
{ printf("Operation by System_y\n"); }

static void
System_y_ctor(struct System_y *__this)
{ __this->operation = System_y_operation; }

void* 
System_y_init()
{
  struct System_y *__this = malloc(sizeof(*__this));

  System_y_ctor(__this);

  return(__this);
}