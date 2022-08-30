/**
 * @file oop/creational/builder/c/director.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_BUILDER_DIRECTOR__
#define __OOP_BUILDER_DIRECTOR__

struct Builder;

struct Director
{
  void (*construct)(struct Builder *__obj);
};

void* Director_init();

#endif /* !__OOP_BUILDER_DIRECTOR__ */