/**
 * @file oop/behavioral/template-method/cpp/main.cpp
 * @author TONBUL, Muhammet
 */

#include "concrete.h"

int
main(int argc, char **argv)
{
  Abstract *__abstract = new Concrete;

  __abstract->template_method();

  return(0);
}