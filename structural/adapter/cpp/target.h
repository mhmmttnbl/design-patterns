/**
 * @file oop/structural/adapter/cpp/target.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_ADAPTER_TARGET__
#define __OOP_ADAPTER_TARGET__

class Target
{
public:
  virtual
  ~Target() = default;
public:
  virtual void
  request() = 0;
};

#endif /* !__OOP_ADAPTER_TARGET__ */