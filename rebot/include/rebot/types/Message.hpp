/**********************************************************************************************************************
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *********************************************************************************************************************/
#include <optional>
#include <string>
#include <vector>

#include "rebot/types/Animation.hpp"
#include "rebot/types/Audio.hpp"
#include "rebot/types/Chat.hpp"
#include "rebot/types/Document.hpp"
#include "rebot/types/MessageEntity.hpp"
#include "rebot/types/Sticker.hpp"
#include "rebot/types/Types.hpp"
#include "rebot/types/User.hpp"
#include "rebot/types/Video.hpp"

namespace rebot::types {
struct Message
{
    defines::Integer messageID;
    std::optional<User> from;
    std::optional<Chat> senderChat;
    defines::Integer data;
    Chat chat;
    std::optional<User> forwardFrom;
    std::optional<Chat> forwardFromChat;
    std::optional<defines::Integer> forwardFromMessageID;
    std::optional<std::string> forwardSignature;
    std::optional<std::string> forwardSenderName;
    std::optional<defines::Integer> forwardDate;
    std::optional<Message> replyToMessage;
    std::optional<User> viaBot;
    std::optional<defines::Integer> editDate;
    std::optional<std::string> mediaGroupID;
    std::optional<std::string> authorSignature;
    std::optional<std::string> text;
    std::optional<std::vector<MessageEntity>> entities;
    std::optional<Animation> animation;
    std::optional<Audio> audio;
    std::optional<Document> document;
    std::optional<std::vector<PhotoSize>> photo;
    std::optional<Sticker> sticker;
    std::optional<Video> video;
};
}