/**
 * @file oop/structural/proxy/c/subject.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_PROXY_SUBJECT__
#define __OOP_PROXY_SUBJECT__

struct Subject_vt;
struct Subject
{
  const struct Subject_vt *_M_vt;
};

struct Subject_vt
{
 void (*request)();
};

static inline void
Subject_request(struct Subject *__this)
{ __this->_M_vt->request(); }

#endif /* !__OOP_PROXY_SUBJECT__ */