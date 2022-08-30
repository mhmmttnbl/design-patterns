/**
 * @file oop/creational/factory-method/cpp/creator_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_FACTORY_CREATOR_X__
#define __OOP_FACTORY_CREATOR_X__

#include "creator.h"

class _Creator_x_impl;
class Creator_x
  : public Creator
{
public:
  Creator_x();
public:
  Product*
  create(Creator::Option __x) override;
private:
  _Creator_x_impl *_M_impl;
};

#endif /* !__OOP_FACTORY_CREATOR_X__ */