/**
 * @file oop/structural/composite/c/main.c
 * @author TONBUL, Muhammet
 */

#include "composite.h"
#include "leaf.h"

int
main(int argc, char **argv)
{
  struct Leaf *__leaf_x = Leaf_init("Leaf-X");
  struct Leaf *__leaf_y = Leaf_init("Leaf-Y");
  struct Leaf *__leaf_z = Leaf_init("Leaf-Z");

  struct Composite *__composite = Composite_init();

  __composite->append(__composite, __leaf_x);
  __composite->append(__composite, __leaf_y);
  __composite->append(__composite, __leaf_z);
  __composite->operation(__composite);

  __composite->remove(__composite, __leaf_x);
  __composite->operation(__composite);

  return(0);
}