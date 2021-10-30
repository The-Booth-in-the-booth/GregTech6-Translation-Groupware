#ifndef GENERATOR_H
#define GENERATOR_H
#pragma once

#include <memory>
#include <string>
#include <vector>

#include "DictLangResult.hpp"
#include "IGeneratorMeta.hpp"
#include "ILangResult.hpp"

using std::shared_ptr;
using std::string;
using std::vector;

class Generator {
private:
  shared_ptr<IGeneratorMeta> _meta;

public:
  Generator() = default;
  Generator(shared_ptr<IGeneratorMeta> meta);
  Generator(const Generator &) = default;
  Generator(Generator &&) = default;
  Generator &operator=(const Generator &) = default;
  Generator &operator=(Generator &&) = default;
  virtual ~Generator() = default;

  virtual shared_ptr<IGeneratorMeta> &meta();
  virtual vector<shared_ptr<ILangResult>> results() = 0;
};
#endif