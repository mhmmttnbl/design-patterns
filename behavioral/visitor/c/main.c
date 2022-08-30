/**
 * @file oop/behavioral/visitor/c/main.c
 * @author TONBUL, Muhammet
 */

#include "visitor_x.h"
#include "element_x.h"
#include "element_y.h"
#include "object_structure.h"

int
main(int argc, char **argv)
{
  struct Visitor *__visitor_x = Visitor_x_init();
  
  struct Element *__element_x = Element_x_init();
  struct Element *__element_y = Element_y_init();

  struct Object_structure *__collection = Object_structure_init();

  __collection->append(__collection, __element_x);
  __collection->append(__collection, __element_y);
  __collection->accept(__collection, __visitor_x);

  __collection->remove(__collection, __element_x);
  __collection->accept(__collection, __visitor_x);

  return(0);
}