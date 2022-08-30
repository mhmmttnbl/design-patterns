/**
 * @file oop/behavioral/observer/cpp/observer_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_OBSERVER_X__
#define __OOP_OBSERVER_X__

#include "observer.h"

class _Observer_x_impl;
class Observer_x
  : public Observer
{
public:
  Observer_x();
public:
  void
  update(Subject *__obj) override;
private:
  _Observer_x_impl *_M_impl;
};

#endif /* !__OOP_OBSERVER_X__ */