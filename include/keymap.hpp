#include "types.hpp"
#include <unordered_map>

const int LAYER = 3;

namespace kb01 {
class keymap {
public:
  std::array<std::unordered_map<kb01::keyValue, int>, 3> map();
};
}; // namespace kb01
