/**
 * @file oop/creational/builder/cpp/builder.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_BUILDER_BASE__
#define __OOP_BUILDER_BASE__

class Product;

class Builder
{
public:
  virtual
  ~Builder() = default;
public:
  virtual void
  build_product_x() = 0;

  virtual void
  build_product_y() = 0;
};

#endif /* !__OOP_BUILDER_BASE__ */