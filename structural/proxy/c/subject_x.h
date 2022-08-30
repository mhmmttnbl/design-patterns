/**
 * @file oop/structural/proxy/c/subject_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_PROXY_SUBJECT_X__
#define __OOP_PROXY_SUBJECT_X__

#include "subject.h"

struct Subject_x
{
  struct Subject _M_base;
};

void* Subject_x_init();

#endif /* !__OOP_PROXY_SUBJECT_X__ */