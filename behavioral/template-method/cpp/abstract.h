/**
 * @file oop/behavioral/template-method/cpp/abstract.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_TEMPLATE_METHOD_ABSTRACT__
#define __OOP_TEMPLATE_METHOD_ABSTRACT__

class Abstract
{
public:
  virtual
  ~Abstract();
public:
  void
  template_method();
protected:
  virtual void
  primitive_operation_x() = 0;

  virtual void
  primitive_operation_y() = 0;
};

#endif /* !__OOP_TEMPLATE_METHOD_ABSTRACT__ */