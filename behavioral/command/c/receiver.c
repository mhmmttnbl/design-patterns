/**
 * @file oop/behavioral/command/c/receiver.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>
#include <stdlib.h>

#include "receiver.h"

static void
Receiver_action(const char *__x)
{ printf("Action by-> %s\n", __x); }

static void
Receiver_ctor(struct Receiver *__this)
{ __this->action = Receiver_action; }

void*
Receiver_init()
{
  struct Receiver *__this = malloc(sizeof(*__this));

  Receiver_ctor(__this);

  return(__this);
}