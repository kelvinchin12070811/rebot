#include <cstdint>

namespace rebot::types::defines {
    /**
     * @brief Represent as the integer data type that represent as the integer type in the Telegram bot API.
     * 
     * This type is the integer type that used as the integer type used in the library. The underlying type of this
     * field might be changed as Telegram bot API updates in the future.
     */
    using Integer = std::uint64_t;
    /**
     * @brief Represent as the float number data type that represent as the float number type in the Telegram bot API.
     * 
     * This type is the float data type that used as the float number type used in the library. The underlying type of
     * this field might be changed as Telegram bot API updates in the future.
     */
    using Float = double;
}