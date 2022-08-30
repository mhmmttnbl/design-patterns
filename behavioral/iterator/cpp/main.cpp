/**
 * @file oop/behavioral/iterator/cpp/main.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "aggregate_x.h"
#include "iterator_x.h"

int
main(int argc, char **argv)
{
  Aggregate<int> *__aggregate = new Aggregate_x<int>;

  __aggregate->append(1);
  __aggregate->append(2);
  __aggregate->append(3);
  __aggregate->append(4);
  __aggregate->append(5);

  Iterator<int> *__iterator = __aggregate->create_iterator();
  //Iterator<int> *__iterator = new Iterator_x<int>(__aggregate);

  for (__iterator->first(); !__iterator->is_done(); __iterator->next())
    std::cout << "Element : " << __iterator->current() << std::endl;

  return(0);
}
