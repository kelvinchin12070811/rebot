/**********************************************************************************************************************
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *********************************************************************************************************************/
#pragma once
#include <optional>
#include <string>

#include "rebot/types/PhotoSize.hpp"
#include "rebot/types/Types.hpp"

namespace rebot::types {
/**
 * @brief Define as Telegram video message
 * 
 * This object represent as the Telegram video message which is available after version 4.0 of the Telegram client.
 */
struct VideoNote
{
    /**
     * @brief File id of the video.
     * 
     * File id of the video, used to download or reuse video.
     */
    std::string fileID;
    /**
     * @brief Unique file id of the video.
     * 
     * Unique file id to identify the video across bots. Can't used to download or reuse the video file.
     */
    std::string fileUniqueID;
    /**
     * @brief Diameter of the video size.
     * 
     * Width and height of the video, represent as the diameter of the video frame.
     */
    defines::Integer length;
    /**
     * @brief Video duration.
     * 
     * Duration of the video, in seconds.
     */
    defines::Integer duration;
    /**
     * @brief Thumbnail of the video.
     * 
     * Image that represent as the thumbnail of the video.
     */
    std::optional<PhotoSize> thumb;
    /**
     * @brief Size of the file.
     * 
     * File size of the video in bytes.
     */
    std::optional<defines::Integer> fileSize;
};
}