/**
 * @file oop/behavioral/observer/cpp/subject.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_SUBJECT_BASE__
#define __OOP_SUBJECT_BASE__

class Observer;

class _Subject_impl;
class Subject
{
public:
  Subject();

  virtual
  ~Subject();
public:
  void 
  attach(Observer *__obj);

  void 
  detach(Observer *__obj);

  void
  notify();

  void
  set(int __x);

  int
  get();
private:
  _Subject_impl *_M_impl;
};

#endif /* !__OOP_SUBJECT_BASE__ */