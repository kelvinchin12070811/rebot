#include <string>
#include <string_view>

#include "rebot/types/User.hpp"
#include "rebot/types/Types.hpp"

namespace rebot::types {
/**
 * @brief Special entities in the message.
 * 
 * This structure represent special entities located in a message object, this include bot command, mention, hashtag,
 * URL, email, phone number, etc. For more entities, refer to rebot::types::MessageEntity::MessageEntityTypes.
 */
struct MessageEntity
{
    /**
     * @brief Defines the types of special message entities.
     * 
     * This structure defines a list of special message entities type available in Telegram, these constants are the
     * name type which can be use to compare with rebot::types::MessageEntity::type directly.
     */
    struct MessageEntityTypes
    {
        /**
         * @brief Mention type
         * 
         * Represent as mention where the pattern are "@{username}"
         */
        static constexpr std::string_view Mention { "mention" };
        /**
         * @brief Hashtag type
         * 
         * Represent as hashtag where the pattern are "#{sometext}"
         */
        static constexpr std::string_view Hashtag { "hashtag" };
        /**
         * @brief Cashtag type
         * 
         * Represent as chashtag where start by a currency sign and currency name. E.g. $USD.
         */
        static constexpr std::string_view Cashtag { "cashtag" };
        /**
         * @brief Bot command type
         * 
         * Represent as bot command where the word start with '/'.
         */
        static constexpr std::string_view BotCommand { "bot_command" };
        /**
         * @brief URL type
         * 
         * Represent as URL type which is usually a hyperlink.
         */
        static constexpr std::string_view Url { "url" };
        /**
         * @brief Email address type
         * 
         * Represent as an email address.
         */
        static constexpr std::string_view Email { "email" };
        /**
         * @brief Phone number type.
         * 
         * Represent as phone number.
         */
        static constexpr std::string_view PhoneNumber { "phone_number" };
        /**
         * @brief Bold text
         * 
         * Represent as text which is in bold style.
         */
        static constexpr std::string_view Bold { "bold" };
        /**
         * @brief Italic text
         *
         * Represent as text which is in italic style.
         */
        static constexpr std::string_view Italic { "italic" };
        /**
         * @brief Underline text
         *
         * Represent as text which is in underline style.
         */
        static constexpr std::string_view Underline { "underline" };
        /**
         * @brief Strike through text
         *
         * Represent as text which is in strike through style.
         */
        static constexpr std::string_view Strikethrough { "strikethrough" };
        /**
         * @brief Line of code
         * 
         * Represent as text which is mono width.
         */
        static constexpr std::string_view Code { "code" };
        /**
         * @brief Block of code
         * 
         * Represent as block of text which is mono width.
         */
        static constexpr std::string_view Pre { "pre" };
        /**
         * @brief Clickable URL
         * 
         * Represent as a string of text which is clickable.
         */
        static constexpr std::string_view TextLink { "text_link" };
        /**
         * @brief Mention a user without username
         * 
         * Represent as a string of text where it mentioning a user without username.
         */
        static constexpr std::string_view TextMention { "text_mention" };
    };

    /**
     * @brief Determine the type of the entity
     * 
     * Type of the message entity it refereed to.
     * 
     * @sa rebot::types::MessageEntity::MessageEntitiyType.
     */
    std::string type;
    /**
     * @brief Offset of the entity located in the message
     * 
     * Offset in UTF-16 code units to the start of the entity
     */
    defines::Integer offset;
    /**
     * @brief Length of the entity
     * 
     * Length of the entity in UTF-16 code units
     */
    defines::Integer length;
    /**
     * @brief Url of the TextLink.
     * 
     * Optional. For rebot::types::MessageEntity::MessageEntityTypes::TextLink only, url that will be opened after user
     * taps on the text.
     */
    std::optional<std::string> url;
    /**
     * @brief Mentioned user in TextMention
     * 
     * Optional. For rebot::types::MessageEntity::MessageEntityTypes::TextMention only, the mentioned user.
     */
    std::optional<User> user;
    /**
     * @brief Programming language used in the code block.
     * 
     * Optional. For rebot::types::MessageEntity::MessageEntityTypes::Pre only, the programming language of the entity
     * text.
     */
    std::optional<std::string> language;
};
}