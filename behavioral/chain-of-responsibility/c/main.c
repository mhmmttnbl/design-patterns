/**
 * @file oop/behavioral/chain-of-responsibility/c/main.c
 * @author TONBUL, Muhammet
 */

#include "handler_x.h"
#include "handler_y.h"

int
main(int argc, char **argv)
{
  struct Handler *__handler_x = Handler_x_init();
  struct Handler *__handler_y = Handler_y_init();

  Handler_next(__handler_x, __handler_y);
  Handler_handle_request(__handler_x, 'a'); // Handled by Handler_x
  Handler_handle_request(__handler_x, 'b'); // Handled by Handler_x
  Handler_handle_request(__handler_x, 'j'); // Forwarded to Handler_y

  Handler_next(__handler_y, __handler_x);
  Handler_handle_request(__handler_y, 'm'); // Handled by Handler_y
  Handler_handle_request(__handler_y, 'n'); // Handled by Handler_y
  Handler_handle_request(__handler_y, 'd'); // Forwarded to Handler_x

  return(0);
}