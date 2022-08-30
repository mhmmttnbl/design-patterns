/**
 * @file oop/structural/proxy/cpp/subject_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_PROXY_SUBJECT_X__
#define __OOP_PROXY_SUBJECT_X__

#include "subject.h"

class _Subject_x_impl;
class Subject_x
  : public Subject
{
public:
  Subject_x();
public:
  void
  request() override;
private:
  _Subject_x_impl *_M_impl;
};

#endif /* !__OOP_PROXY_SUBJECT_X__ */