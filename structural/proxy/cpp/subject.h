/**
 * @file oop/structural/proxy/cpp/subject.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_PROXY_SUBJECT__
#define __OOP_PROXY_SUBJECT__

class Subject
{
public:
  virtual
  ~Subject() = default;
public:
  virtual void
  request() = 0;
};

#endif /* !__OOP_PROXY_SUBJECT__ */