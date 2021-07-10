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
 * @brief General file object.
 * 
 * Represent as the general file which is excluded from photo, audio, voice message, animation and video.
 */
struct Document
{
    /**
     * @brief Identifier of the file.
     * 
     * Identifier of the file, used to download or reuse the file.
     */
    std::string fileID;
    /**
     * @brief Unique identifier of the file.
     * 
     * Unique identifier of the file, used to uniquely identify the file across the bot. Can't be used to download or
     * reuse the file.
     */
    std::string fileUinqueID;
    /**
     * @brief Thumbnail of the file.
     * 
     * Optional, represent as the thumbnail of the file as defined by the sender.
     */
    std::optional<PhotoSize> thumb;
    /**
     * @brief Original file name;
     * 
     * Optional, represent as the original file name as defined by the sender.
     */
    std::optional<std::string> fileName;
    /**
     * @brief MIME type of the document.
     * 
     * Optional, represent as the MIME type of the file as defined by the sender.
     */
    std::optional<std::string> mimeType;
    /**
     * @brief Size of the file.
     * 
     * Optional, represent as the size of the file as defined by the sender.
     */
    std::optional<defines::Integer> fileSize;
};
}