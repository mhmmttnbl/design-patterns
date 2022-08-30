/**
 * @file oop/creational/singleton/cpp/singleton.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_SINGLETON_BASE__
#define __OOP_SINGLETON_BASE__

class Singleton
{
public: 
  static Singleton* 
  instance();

  void
  operation();
private:
  Singleton();
private:
  static Singleton *_M_obj;
};

#endif /* !__OOP_SINGLETON_BASE__ */