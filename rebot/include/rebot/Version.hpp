/**********************************************************************************************************************
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *********************************************************************************************************************/
#include <string_view>

namespace rebot {
/**
 * @brief Represent as the version of the library.
 * 
 * This constant represent the version of the library written in "major.minor.update.bugfix surfix" pattern. This
 * constant use to detect the version of library if it has newer version or API difference in future library.
 */
constexpr std::string_view RebotVersion { "0.0.0.0 alpha" };
}