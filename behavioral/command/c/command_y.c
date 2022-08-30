/**
 * @file oop/behavioral/command/c/command_y.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>
#include <stdlib.h>

#include "command_y.h"
#include "receiver.h"

static void
Command_y_execute(struct Command_y *__this)
{ __this->_M_obj->action("Command_y"); }

static void
Command_y_ctor(struct Command_y *__this, 
               struct Receiver *__obj)
{
  /* Aliases for base method signatures. */
  typedef void (*__Base_execute)(struct Command*);

  /* Casting is required to match base class method signatures. */
  static struct Command_vt __vt = {
    .execute = (__Base_execute)Command_y_execute
  };

  __this->_M_base._M_vt = &__vt;
  __this->_M_obj = __obj;
}

void*
Command_y_init(struct Receiver *__obj)
{
  struct Command_y *__this = malloc(sizeof(*__this));

  Command_y_ctor(__this, __obj);

  return(__this);
}