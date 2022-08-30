/**
 * @file oop/behavioral/command/c/command.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_COMMAND_BASE__
#define __OOP_COMMAND_BASE__

struct Command_vt;
struct Command
{
  const struct Command_vt *_M_vt;
};

struct Command_vt
{
  void (*execute)(struct Command *__this);
};

static inline void
Command_execute(struct Command *__this)
{ __this->_M_vt->execute(__this); }

#endif /* !__OOP_COMMAND_BASE__ */