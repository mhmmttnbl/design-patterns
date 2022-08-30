/**
 * @file oop/behavioral/iterator/c/main.c
 * @author TONBUL, Muhammet
 */

#include <stdio.h>

#include "aggregate_x.h"
#include "iterator_x.h"

int
main(int argc, char **argv)
{
  struct Aggregate *__aggregate = Aggregate_x_init();

  Aggregate_append(__aggregate, 1);
  Aggregate_append(__aggregate, 2);
  Aggregate_append(__aggregate, 3);
  Aggregate_append(__aggregate, 4);
  Aggregate_append(__aggregate, 5);

  struct Iterator *__iterator = Aggregate_create_iterator(__aggregate);
  //struct Iterator *__iterator = Iterator_x_init(__aggregate);

  for (Iterator_first(__iterator); !Iterator_is_done(__iterator); 
    Iterator_next(__iterator))
    printf("Element : %d\n", Iterator_current(__iterator));

  return(0);
}