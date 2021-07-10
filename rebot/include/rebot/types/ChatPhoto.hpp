/**********************************************************************************************************************
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *********************************************************************************************************************/
#pragma once
#include <string>

namespace rebot::types {
/**
 * @brief Represented as chat photo.
 * 
 * This object represent as the profile photo of the chat room.
 */
struct ChatPhoto
{
    /**
     * @brief File identifier of the small chat photo.
     * 
     * File identifier of the small chat photo (160x160 px), can be used only for photo download and only valid until
     * the photo changed.
     */
    std::string smallFileID;
    /**
     * @brief Unique file identifier of the small chat photo.
     * 
     * Unique file identifier of the small chat photo (160x160 px). Used to uniquely identify the chat photo,
     * can't use to download the photo.
     */
    std::string smallFileUniqueID;
    /**
     * @brief File identifier of the large chat photo.
     * 
     * File identifier of the large chat photo (640x640 px), can be used only for photo download and only valid until
     * the photo changed.
     */
    std::string BigFileID;
    /**
     * @brief Unique file identifier of the large chat photo.
     * 
     * Unique file identifier of the large chat photo (640x640 px), Used to uniquely identify the chat photo,
     * can't use to download the photo.
     */
    std::string bigFileUniqueID;
};
}