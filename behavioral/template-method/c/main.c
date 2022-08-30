/**
 * @file oop/behavioral/template-method/c/main.c
 * @author TONBUL, Muhammet
 */

#include "concrete.h"

int
main(int argc, char **argv)
{
  struct Abstract *__abstract = Concrete_init();

  __abstract->template_method(__abstract);

  return(0);
}