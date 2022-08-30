/**
 * @file oop/structural/proxy/c/main.c
 * @author TONBUL, Muhammet
 */

#include "subject.h"
#include "proxy.h"

int
main(int argc, char **argv)
{
  struct Subject *__subject = Proxy_init();

  Subject_request(__subject);

  return(0);
}