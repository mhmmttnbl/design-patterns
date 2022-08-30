/**
 * @file oop/behavioral/observer/c/subject.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_SUBJECT_BASE__
#define __OOP_SUBJECT_BASE__

struct Observer;

struct Subject_vt;
struct Subject
{
  const struct Subject_vt *_M_vt;

  void (*attach)(struct Subject *__this, struct Observer *__obj);
  void (*detach)(struct Subject *__this, struct Observer *__obj);
  void (*notify)(struct Subject *__this);
  void (*set)(struct Subject *__this, int __x);
  int (*get)(struct Subject *__this);

  struct Observer *_M_pool[128];
  int              _M_size;
  int              _M_x;
};

void* Subject_init();

#endif /* !__OOP_SUBJECT_BASE__ */