/**
 * @file oop/behavioral/command/cpp/command_y.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "command_y.h"
#include "receiver.h"

class _Command_y_impl
{
public:
  _Command_y_impl(Receiver *__obj)
    : _M_obj(__obj)
  {}
public:
  void
  _M_execute()
  { _M_obj->action("Command_y"); }
private:
  Receiver *_M_obj;
};

Command_y
  ::Command_y(Receiver *__obj)
    : _M_impl(new _Command_y_impl(__obj))
{}

void
Command_y
  ::execute()
{ _M_impl->_M_execute(); }