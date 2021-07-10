/**********************************************************************************************************************
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *********************************************************************************************************************/
#pragma once
#include <optional>
#include <string>

#include "rebot/types/Types.hpp"

namespace rebot::types {
/**
 * @brief Size of photo or sticker/file thumbnail.
 * 
 * Define the size of the photo or file thumbnail, it include the file id to download the image. This object also
 * include the dimension of the photo.
 */
struct PhotoSize
{
    /**
     * @brief File id to identify the file.
     * 
     * ID of the file to download or reuse the file.
     */
    std::string fileID;
    /**
     * @brief Unique file id to identify the file.
     * 
     * This id use to identify the file uniquely across the Telegram platform, can't be used to download or reuse the
     * file.
     */
    std::string fileUniqueID;
    /**
     * @brief Photo width
     * 
     * Width of the photo.
     */
    defines::Integer width;
    /**
     * @brief Photo height
     * 
     * Height of the phot.
     */
    defines::Integer height;
    /**
     * @brief File size;
     * 
     * Optional, file size.
     */
    std::optional<defines::Integer> fileSize;
};
}