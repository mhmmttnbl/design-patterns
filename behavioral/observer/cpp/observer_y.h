/**
 * @file oop/behavioral/observer/cpp/observer_y.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_OBSERVER_Y__
#define __OOP_OBSERVER_Y__

#include "observer.h"

class _Observer_y_impl;
class Observer_y
  : public Observer
{
public:
  Observer_y();
public:
  void
  update(Subject *__obj) override;
private:
  _Observer_y_impl *_M_impl;
};

#endif /* !__OOP_OBSERVER_Y__ */