#include <string>
#include <optional>

#include "rebot/types/Types.hpp"

namespace rebot::types {
/**
 * @brief Represent as the Telegram user or bot.
 * 
 * This object is the object that describe the Telegram user or bot account. It define the data that a Telegram
 * account required to identify a user.
 */
struct User
{
    /**
     * @brief Unique id of the user.
     * 
     * This field represent as the unique identifier of the Telegram user or bot account.
     */
    defines::Integer id;
    /**
     * @brief Determine if the user is a Telegram bot account.
     * 
     * This field determine if the user account is a Telegram bot account. True if the user is bot and false otherwise.
     */
    bool isBot;
    /**
     * @brief User's first name
     * 
     * Optional, first name of the user.
     */
    std::optional<std::string> firstName;
    /**
     * @brief User's Last name
     * 
     * Optional, last name of the user.
     */
    std::optional<std::string> lastName;
    /**
     * @brief Username of the user.
     * 
     * Optional, username of the user.
     */
    std::optional<std::string> username;
    /**
     * @brief Language code.
     * 
     * Optional, define the language used by the user in
     * [IETF language tag](https://en.wikipedia.org/wiki/IETF_language_tag).
     */
    std::optional<std::string> languageCode;
    /**
     * @brief Determine if the bot can join Telegram groups.
     * 
     * Optional, use only with bot. This field determine if the bot can be invited to a Telegram bot.
     * 
     * @note This field only returned by the getMe API.
     */
    std::optional<bool> canJoinGroups;
    /**
     * @brief Determine if the bot is in privacy mode.
     * 
     * Optional, use only with bot. This field determine if the bot is in
     * [privacy mode](https://core.telegram.org/bots#privacy-mode).
     * 
     * @not This field only returned by the getMe API.
     */
    std::optional<bool> canReadAllGroupMessage;
    /**
     * @brief Determine if the bot support inline queries.
     * 
     * Optional, use only with bot. This field determine if the bot support Telegram inline queries.
     * 
     * @note This field only returned by the getMe API.
     */
    std::optional<bool> supportsInlineQueries;
};
}