/**
 * @file oop/creational/builder/cpp/director.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_BUILDER_DIRECTOR__
#define __OOP_BUILDER_DIRECTOR__

class Builder;

class _Director_impl;
class Director
{
public:
  Director();
public:
  void
  construct(Builder *__obj);
private:
  _Director_impl *_M_impl;
};

#endif /* !__OOP_BUILDER_DIRECTOR__ */