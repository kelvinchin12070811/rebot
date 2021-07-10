/**********************************************************************************************************************
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *********************************************************************************************************************/
#pragma once
#include <optional>
#include <string>

#include "rebot/types/Types.hpp"
#include "rebot/types/PhotoSize.hpp"

namespace rebot::types {
/**
 * @brief Video file object.
 * 
 * Represent as video file as identified by the Telegram client.
 */
struct Video
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
     * Unique identifier of the file, used to uniquely identify the file across the bot. Can't be
     * used to download or reuse the file.
     */
    std::string fileUniqeID;
    /**
     * @brief Video width.
     * 
     * Width of the video as defined by the sender.
     */
    defines::Integer width;
    /**
     * @brief Video height;
     * 
     * Height of the video as defined by the sender.
     */
    defines::Integer height;
    /**
     * @brief Duration of the video.
     * 
     * Duration of the video in seconds as defined by the sender.
     */
    defines::Integer duration;
    /**
     * @brief Thumbnail of the video.
     * 
     * Optional, video thumbnail.
     */
    std::optional<PhotoSize> thumb;
    /**
     * @brief Original file name of the video.
     * 
     * Optional, original file of the video as defined by the sender.
     */
    std::optional<std::string> fileName;
    /**
     * @brief MIME type of the video file.
     * 
     * Optional, MIME type of the video file as defined by the sender.
     */
    std::optional<std::string> mimeType;
    /**
     * @brief Size of the file.
     * 
     * Optional, size of the video file.
     */
    std::optional<defines::Integer> fileSize;
};
}