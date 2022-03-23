#pragma once

#include <glm/glm.hpp>
#include <string>

class Shader {
 private:
  unsigned int ID;

 public:
  Shader(const std::string& vertexPath, const std::string& fragmentPath);
  void use();

  template <typename T>
  void set(const std::string& name, T value);

  void setBool(const std::string& name, bool value);
  void setInt(const std::string& name, int value);
  void setFloat(const std::string& name, float value);

  void setMat4(const std::string& name, const glm::mat4& mat);
};