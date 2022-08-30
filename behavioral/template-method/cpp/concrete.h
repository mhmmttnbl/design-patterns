/**
 * @file oop/behavioral/template-method/cpp/concrete.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_TEMPLATE_METHOD_CONCRETE__
#define __OOP_TEMPLATE_METHOD_CONCRETE__

#include "abstract.h"

class _Concrete_impl;
class Concrete
  : public Abstract
{
public:
  Concrete();
private:
  void
  primitive_operation_x() override;

  void
  primitive_operation_y() override;
private:
  _Concrete_impl *_M_impl;
};

#endif /* !__OOP_TEMPLATE_METHOD_CONCRETE__ */