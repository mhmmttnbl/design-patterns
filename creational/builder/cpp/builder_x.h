/**
 * @file oop/creational/builder/cpp/builder_x.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_BUILDER_X__
#define __OOP_BUILDER_X__

#include "builder.h"

class _Builder_x_impl;
class Builder_x
  : public Builder
{
public:
  Builder_x();
public:
  virtual void
  build_product_x() override;

  virtual void
  build_product_y() override;
private:
  _Builder_x_impl *_M_impl;
};

#endif /* !__OOP_BUILDER_X__ */