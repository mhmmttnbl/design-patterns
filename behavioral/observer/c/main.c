/**
 * @file oop/behavioral/observer/c/main.c
 * @author TONBUL, Muhammet
 */

#include "subject.h"
#include "observer_x.h"
#include "observer_y.h"

int
main(int argc, char **argv)
{
  struct Observer *__observer_x = Observer_x_init();
  struct Observer *__observer_y = Observer_y_init();
  
  struct Subject *__subject = Subject_init();

  __subject->attach(__subject, __observer_x);
  __subject->attach(__subject, __observer_y);

  __subject->set(__subject, 7);
  __subject->notify(__subject);

  __subject->detach(__subject, __observer_x);
  __subject->notify(__subject);

  return(0);
}