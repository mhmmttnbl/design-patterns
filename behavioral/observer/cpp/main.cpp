/**
 * @file oop/behavioral/observer/cpp/main.cpp
 * @author TONBUL, Muhammet
 */

#include "subject.h"
#include "observer_x.h"
#include "observer_y.h"

int
main(int argc, char **argv)
{ 
  Observer *__observer_x = new Observer_x;
  Observer *__observer_y = new Observer_y;

  Subject *__subject = new Subject;

  __subject->attach(__observer_x);
  __subject->attach(__observer_y);

  __subject->set(7);
  __subject->notify(); // Received by Observer_x and Observer_y

  __subject->detach(__observer_x); // Observer_x detached
  __subject->notify(); // Only Observer_y is able to receive current Subject state.

  return(0);
}