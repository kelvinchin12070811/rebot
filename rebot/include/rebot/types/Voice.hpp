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
 * @brief Voice message types.
 * 
 * Represent as voice message in Telegram.
 */
struct Voice
{
    /**
     * @brief Identifier of the voice message file.
     * 
     * Identifier of the voice message file, used to identify the file on the Telegram server, also used to download or
     * reuse the file.
     */
    std::string fileID;
    /**
     * @brief Unique identifier of the voice message file.
     * 
     * Unique identifier of the voice message file, used to uniquely identify the voice message file across the bots,
     * can't used to download or reuse the file.
     */
    std::string fileUniqueID;
    /**
     * @brief Voice message duration.
     * 
     * Duration of the voice message in seconds as defined by the user.
     */
    defines::Integer duration;
    std::optional<std::string> mimeType;
    std::optional<defines::Integer> fileSize;
};
}