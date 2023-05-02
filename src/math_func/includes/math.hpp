#include <cstdint>
#include <string>

namespace mathFunc {

template <typename T>
T sum(const T __arg1, const T __arg2) {
    return __arg1 + __arg2;
}

std::string get_value_str(const std::string& __str) noexcept;

}  // namespace mathFunc