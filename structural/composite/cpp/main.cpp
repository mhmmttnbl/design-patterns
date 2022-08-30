/**
 * @file oop/structural/composite/cpp/main.cpp
 * @author TONBUL, Muhammet
 */

#include "composite.h"
#include "leaf.h"

int
main(int argc, char **argv)
{
  Leaf *__leaf_x = new Leaf("Leaf-X");
  Leaf *__leaf_y = new Leaf("Leaf-Y");
  Leaf *__leaf_z = new Leaf("Leaf-Z");

  Composite *__composite = new Composite; 
  
  __composite->append(__leaf_x);
  __composite->append(__leaf_y);
  __composite->append(__leaf_z);
  __composite->operation();

  __composite->remove(__leaf_x);
  __composite->operation();

  return(0);
}