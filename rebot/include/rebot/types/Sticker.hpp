#include <optional>
#include <string>

#include "rebot/types/MaskPosition.hpp"
#include "rebot/types/PhotoSize.hpp"
#include "rebot/types/Types.hpp"

namespace rebot::types {
/**
 * @brief Sticker object.
 * 
 * Represent as the sticker file in Telegram.
 */
struct Sticker
{
    /**
     * @brief Identifier of the file.
     * 
     * Identifier to identify the file, used to download or reuse the file.
     */
    std::string fileID;
    /**
     * @brief Unique identifier of the file.
     * 
     * Unique identifier of the file, used to uniquely identify the file across the bots. Can't be used to download or
     * reuse the file.
     */
    std::string fileUniqueID;
    /**
     * @brief Sticker width.
     * 
     * Width of the sticker.
     */
    defines::Integer width;
    /**
     * @brief Sticker height.
     * 
     * Height of the sticker.
     */
    defines::Integer height;
    /**
     * @brief Determine if it is animated sticker.
     * 
     * Determine if the sticker can be play as animation.
     */
    bool isAnimated;
    /**
     * @brief Thumbnail of the sticker.
     * 
     * Optional, thumbnail of the sticker, usually are in .webp or .jpg format.
     */
    std::optional<PhotoSize> thumb;
    /**
     * @brief Emoji associated to the sticker.
     * 
     * Optional, define the emoji that best suit to the sticker.
     */
    std::optional<std::string> emoji;
    /**
     * @brief Sticker set where the sticker belongs to.
     * 
     * Optional, identify the name of the sticker set where the sticker belong to.
     */
    std::optional<std::string> setName;
    /**
     * @brief Position of the mask at.
     * 
     * Optional, identify the position of the mask on the sticker.
     */
    std::optional<MaskPosition> maskPosition;
    /**
     * @brief Size of the file.
     * 
     * Optional, identify the size of the file.
     */
    std::optional<defines::Integer> fileSize;
};
}