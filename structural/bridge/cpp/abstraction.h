/**
 * @file oop/structural/bridge/cpp/abstraction.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_BRIDGE_ABSTRACTION__
#define __OOP_BRIDGE_ABSTRACTION__

class Implementor;

class _Abstraction_impl;
class Abstraction
{
public:
  Abstraction(Implementor *__obj);
public:
  void
  operation();
private:
  _Abstraction_impl *_M_impl;
};

#endif /* !__OOP_BRIDGE_ABSTRACTION__ */