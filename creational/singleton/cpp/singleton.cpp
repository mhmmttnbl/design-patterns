/**
 * @file oop/creational/singleton/cpp/singleton.cpp
 * @author TONBUL, Muhammet
 */

#include <iostream>

#include "singleton.h"

Singleton *Singleton::_M_obj = nullptr;

Singleton
  ::Singleton()
{ std::cout << "Instance invoked" << std::endl; }

Singleton*
Singleton
  ::instance()
{
  if (!_M_obj)
    _M_obj = new Singleton();
  
  return(_M_obj);
}

void
Singleton
  ::operation()
{ std::cout << "Operation by Singleton" << std::endl; }