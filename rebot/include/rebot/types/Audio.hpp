#include <optional>
#include <string>

#include "rebot/types/Types.hpp"
#include "rebot/types/PhotoSize.hpp"

namespace rebot::types {
/**
 * @brief Audio or music type of the file.
 * 
 * Represented as audio or music file which defined by the Telegram client.
 */
struct Audio
{
    /**
     * @brief Identifier of the file.
     * 
     * Identifier of the file, can be used to download or reuse the file.
     */
    std::string fileID;
    /**
     * @brief Unique identifier of the file.
     * 
     * Unique identifier of the file, used to uniquely identify the file across the bot. Can't be used to download or
     * reuse the file.
     */
    std::string fileUniqueID;
    /**
     * @brief Duration of the audio or music.
     * 
     * Duration of the file in seconds as defined by the sender.
     */
    defines::Integer duration;
    /**
     * @brief Performer of the audio or music.
     * 
     * Optional, define the performer of the audio or music as defined by the sender or by the audio tag.
     */
    std::optional<std::string> performer;
    /**
     * @brief Title of the audio or music.
     * 
     * Optional, define the audio or music's title as defined by the sender or by the audio tag.
     */
    std::optional<std::string> title;
    /**
     * @brief Original file name of the audio or music file.
     * 
     * Optional, define the original file name of the audio or music file as defined by the sender.
     */
    std::optional<std::string> fileName;
    /**
     * @brief MIME type of the file.
     * 
     * Optional, MIME type of the audio or music file, defined by the sender.
     */
    std::optional<std::string> mimeType;
    /**
     * @brief Size of the audio or music file.
     * 
     * Optional, size or length of the audio or music file, defined by the sender.
     */
    std::optional<defines::Integer> fileSize;
    /**
     * @brief Thumbnail of the audio or music cover photo.
     * 
     * Optional, thumbnail of the audio or music file's cover photo.
     */
    std::optional<PhotoSize> thumb;
};
}