/**
 * @file oop/creational/singleton/cpp/main.cpp
 * @author TONBUL, Muhammet
 */

#include "singleton.h"

int
main(int argc, char **argv)
{
  Singleton *__singleton = Singleton::instance();

  __singleton->operation();

  return(0);
}