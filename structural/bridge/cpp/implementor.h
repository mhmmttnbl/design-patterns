/**
 * @file oop/structural/bridge/cpp/implementor.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_BRIDGE_IMPLEMENTOR__
#define __OOP_BRIDGE_IMPLEMENTOR__

class Implementor
{
public:
  virtual
  ~Implementor() = default;
public:
  virtual void
  operation() = 0;
};

#endif /* !__OOP_BRIDGE_IMPLEMENTOR__ */