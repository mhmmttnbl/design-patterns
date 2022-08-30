/**
 * @file oop/structural/adapter/c/adaptee.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>
#include <stdlib.h>

#include "adaptee.h"

static void
Adaptee_specific_request()
{ printf("Specific request by Adaptee.\n"); }

static void
Adaptee_ctor(struct Adaptee *__this)
{ __this->specific_request = Adaptee_specific_request; }

void*
Adaptee_init()
{
  struct Adaptee *__this = malloc(sizeof(*__this));

  Adaptee_ctor(__this);

  return(__this);
}