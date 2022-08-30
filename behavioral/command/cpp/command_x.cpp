/**
 * @file oop/behavioral/command/cpp/command_x.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "command_x.h"
#include "receiver.h"

class _Command_x_impl
{
public:
  _Command_x_impl(Receiver *__obj)
    : _M_obj(__obj)
  {}
public:
  void
  _M_execute()
  { _M_obj->action("Command_x"); }
private:
  Receiver *_M_obj;
};

Command_x
  ::Command_x(Receiver *__obj)
    : _M_impl(new _Command_x_impl(__obj))
{}

void
Command_x
  ::execute()
{ _M_impl->_M_execute(); }