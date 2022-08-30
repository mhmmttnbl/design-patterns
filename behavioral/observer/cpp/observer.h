/**
 * @file oop/behavioral/observer/cpp/observer.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_OBSERVER_BASE__
#define __OOP_OBSERVER_BASE__

class Subject;

class Observer
{
public:
  virtual
  ~Observer() = default;
public:
  virtual void
  update(Subject *__obj) = 0;
};

#endif /* !__OOP_OBSERVER_BASE__ */