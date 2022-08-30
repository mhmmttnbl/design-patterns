/**
 * @file oop/behavioral/state/cpp/state_y.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "state_y.h"
#include "state_x.h"
#include "context.h"

class _State_y_impl
{
public:
  void
  _M_handle(Context *__obj, State *__this)
  {
    std::cout << "Handle by State_y" << std::endl; 
    __obj->change(__this); 
  }
};

State_y
  ::State_y()
    : _M_impl(new _State_y_impl)
{}

void
State_y
  ::handle(Context *__obj)
{ _M_impl->_M_handle(__obj, new State_x); }