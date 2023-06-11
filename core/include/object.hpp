#ifndef CORE_INCLUDE_OBJECT_HPP_
#define CORE_INCLUDE_OBJECT_HPP_

#include <array>

namespace mot {
  struct Covariance {
    std::array<double, 6u> diagonal = {};
    std::array<double, 21u> lower_triangle = {};
  };

  struct Object {
    std::array<double, 6u> state = {};
  };
} //  namespace mot

#endif  //  CORE_INCLUDE_OBJECT_HPP_
