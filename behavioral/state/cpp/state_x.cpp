/**
 * @file oop/behavioral/state/cpp/state_x.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "state_x.h"
#include "state_y.h"
#include "context.h"

class _State_x_impl
{
public:
  void
  _M_handle(Context *__obj, State *__this)
  {
    std::cout << "Handle by State_x" << std::endl; 
    __obj->change(__this);
  }
};

State_x
  ::State_x()
    : _M_impl(new _State_x_impl)
{}

void
State_x
  ::handle(Context *__obj)
{ _M_impl->_M_handle(__obj, new State_y); }