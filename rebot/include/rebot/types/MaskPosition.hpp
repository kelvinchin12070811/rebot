/**********************************************************************************************************************
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *********************************************************************************************************************/
#pragma once
#include <string>

#include "rebot/types/Types.hpp"

namespace rebot::types {
/**
 * @brief Define the position of the mask on the face.
 * 
 * This object describes the position on faces where a mask should be placed by default.
 */
struct MaskPosition
{
    /**
     * @brief The part of the face where the mask should be placed.
     * 
     * The part of the face relative to which the mask should be placed. One of “forehead”, “eyes”, “mouth”, or “chin”.
     */
    std::string point;
    /**
     * @brief X-axis shift from where the mask should be placed.
     * 
     * Shift by X-axis measured in widths of the mask scaled to the face size, from left to right. For example,
     * choosing -1.0 will place mask just to the left of the default mask position.
     */
    defines::Float xShift;
    /**
     * @brief Y-axis shift from where the mask should be placed.
     * 
     * Shift by Y-axis measured in heights of the mask scaled to the face size, from top to bottom. For example, 1.0
     * will place the mask just below the default mask position.
     */
    defines::Float yShift;
    /**
     * @brief Scale of the mask.
     * 
     * Mask scaling coefficient. For example, 2.0 means double size.
     */
    defines::Float scale;
};
}