#include <string>
#include <string_view>

#include "rebot/types/ChatPhoto.hpp"
#include "rebot/types/Types.hpp"

namespace rebot::types {
/**
 * @brief Chat room object.
 * 
 * Represent as chat room object. This object represent any chat room of Telegram, including group, channels and
 * private message.
 */
struct Chat
{
    /**
     * @brief Determine the type of the chat room.
     * 
     * Chat room can be any channel that users communicate in Telegram, these channel include private chat, group chat,
     * Telegram supergroup, or Telegram channel. This structure defines constants of the types use to identify the type
     * of the chat.
     */
    struct ChatType
    {
        /**
         * @brief Represented as private chat type.
         * 
         * This constant represented as private chat in Telegram.
         */
        static constexpr std::string_view Private { "private" };
        /**
         * @brief Represented as private group chat in Telegram.
         * 
         * This constant represented as private group chat in Telegram.
         */
        static constexpr std::string_view Group { "group" };
        /**
         * @brief Represented as Telegram supergroup.
         * 
         * This constant represented as Telegram supergroup which can hold large number of participants.
         */
        static constexpr std::string_view Supergroup { "supergroup" };
        /**
         * @brief Represented as Telegram channel.
         * 
         * This constant represented as Telegram channel.
         */
        static constexpr std::string_view Channel { "channel" };
    };

    /**
     * @brief UID of the chat.
     * 
     * Unique identifier of the chat, use to identify the chat room uniquely.
     */
    defines::Integer id;
    /**
     * @brief Type of the chat.
     * 
     * Represent as the type of the chat
     */
    std::string type;
    std::optional<std::string> title;
    std::optional<std::string> username;
    std::optional<std::string> firstName;
    std::optional<std::string> lastName;
    std::optional<ChatPhoto> photo;
    std::optional<std::string> bio;
    std::optional<std::string> description;
};
}