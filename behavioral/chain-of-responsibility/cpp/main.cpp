/**
 * @file oop/behavioral/chain-of-responsibility/cpp/main.cpp
 * @author TONBUL, Muhammet
 */

#include "handler_x.h"
#include "handler_y.h"

int
main(int argc, char **argv)
{
  Handler *__handler_x = new Handler_x;
  Handler *__handler_y = new Handler_y;

  __handler_x->next(__handler_y);
  __handler_x->handle_request('a'); // Handled by Handler_x
  __handler_x->handle_request('b'); // Handled by Handler_x
  __handler_x->handle_request('j'); // Forwarded to Handler_y

  __handler_y->next(__handler_x);
  __handler_y->handle_request('m'); // Handled by Handler_y
  __handler_y->handle_request('n'); // Handled by Handler_y
  __handler_y->handle_request('d'); // Forwarded to Handler_x

  return(0);
}