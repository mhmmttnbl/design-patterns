/**
 * @file oop/behavioral/visitor/cpp/main.cpp
 * @author TONBUL, Muhammet
 */

#include "visitor_x.h"
#include "element_x.h"
#include "element_y.h"
#include "object_structure.h"

int
main(int argc, char **argv)
{
  Visitor *__visitor_x = new Visitor_x;
  
  Element *__element_x = new Element_x;
  Element *__element_y = new Element_y;

  Object_structure *__collection = new Object_structure;

  __collection->append(__element_x);
  __collection->append(__element_y); 
  __collection->accept(__visitor_x);

  __collection->remove(__element_x);
  __collection->accept(__visitor_x);
  
  return(0);
}