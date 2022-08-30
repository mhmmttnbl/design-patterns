/**
 * @file oop/behavioral/template-method/cpp/abstract.cpp
 * @author TONBUL, Muhammet
 */

#include "abstract.h"

Abstract
  ::~Abstract()
{}

void
Abstract
  ::template_method()
{
  primitive_operation_x();
  primitive_operation_y();
}