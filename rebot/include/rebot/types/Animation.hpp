/**********************************************************************************************************************
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *********************************************************************************************************************/
#pragma once
#include <optional>
#include <string>

#include "rebot/types/ChatPhoto.hpp"
#include "rebot/types/PhotoSize.hpp"
#include "rebot/types/Types.hpp"

namespace rebot::types {
/**
 * @brief Represent as animation file
 * 
 * This object represents an animation file (GIF or H.264/MPEG-4 AVC video without sound).
 */
struct Animation
{
    /**
     * @brief File id for the animation file.
     * 
     * Identifier for this file, which can be used to download or reuse the file.
     */
    std::string fileID;
    /**
     * @brief Unique file id for the animation file.
     * 
     * Unique identifier for this file, supposed to be the same across all Telegram bot, can't use to download or reuse
     * the file.
     */
    std::string fileUniqueID;
    /**
     * @brief Video Width.
     * 
     * Width of the video defined by sender.
     */
    defines::Integer width;
    /**
     * @brief Video height.
     * 
     * Height of the video defined by sender.
     */
    defines::Integer height;
    /**
     * @brief Duration of the video.
     * 
     * Duration of the video in second defined by sender.
     */
    defines::Integer duration;
    /**
     * @brief Thumbnail of the animation.
     * 
     * Optional, thumbnail of the animation as defined by sender.
     */
    std::optional<PhotoSize> thumb;
    /**
     * @brief Name of the animation file.
     * 
     * Optional, file name of the animation file as defined by sender.
     */
    std::optional<std::string> fileName;
    /**
     * @brief MIME type of the animation file.
     * 
     * Optional, MIME type of the file as defined by sender.
     */
    std::optional<std::string> mimeType;
    /**
     * @brief Size of the animation file.
     * 
     * Optional, animation file size.
     */
    std::optional<defines::Integer> fileSize;
};
}