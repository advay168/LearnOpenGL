#pragma once

#include "Layout.h"

class VertexBuffer {
 private:
  unsigned int ID;

 public:
  VertexBuffer(Layout& layout, void* data, size_t size);
  void Bind();
};