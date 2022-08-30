/**
 * @file oop/creational/builder/c/builder.h
 * @author TONBUL, Muhammet
 */

#ifndef __OOP_BUILDER_BASE__
#define __OOP_BUILDER_BASE__

struct Builder_vt;
struct Builder
{
  const struct Builder_vt *_M_vt;
};

struct Builder_vt
{
  void (*build_product_x)();
  void (*build_product_y)();
};

static inline void
Builder_build_product_x(struct Builder *__this)
{ __this->_M_vt->build_product_x(); }

static inline void
Builder_build_product_y(struct Builder *__this)
{ __this->_M_vt->build_product_y(); }

#endif /* !__OOP_BUILDER_BASE__ */