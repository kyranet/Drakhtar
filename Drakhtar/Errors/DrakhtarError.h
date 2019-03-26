// Copyright 2019 the Drakhtar authors. All rights reserved. MIT license.

#pragma once
#include <stdexcept>

class DrakhtarError : public std::logic_error {
 public:
  /**
   * \brief Create a Drakhtar Error instance.
   * \param message The error message description.
   */
  explicit DrakhtarError(const std::string &message)
      : std::logic_error("Drakhtar Error " + message) {}
};
