/**
 * @file oop/structural/proxy/cpp/main.cpp
 * @author TONBUL, Muhammet
 */

#include "proxy.h"

int
main(int argc, char **argv)
{
  Subject *__subject = new Proxy;

  __subject->request();

  return(0);
}