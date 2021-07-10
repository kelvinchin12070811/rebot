project(rebot)
include_directories("include")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DDEBUG")

set(PROJECT_SOURCE_FILES
    "src/Test.cpp"
)

set(PROJECT_HEADER_FILES
    "include/rebot/Test.hpp"
    "include/rebot/types/Animation.hpp"
    "include/rebot/types/Audio.hpp"
    "include/rebot/types/Chat.hpp"
    "include/rebot/types/ChatPhoto.hpp"
    "include/rebot/types/Document.hpp"
    "include/rebot/types/MaskPosition.hpp"
    "include/rebot/types/Message.hpp"
    "include/rebot/types/MessageEntity.hpp"
    "include/rebot/types/PhotoSize.hpp"
    "include/rebot/types/Sticker.hpp"
    "include/rebot/types/Types.hpp"
    "include/rebot/types/User.hpp"
    "include/rebot/types/Video.hpp"
    "include/rebot/Version.hpp"
 "include/rebot/types/VideoNote.hpp")

add_library(${PROJECT_NAME} STATIC ${PROJECT_HEADER_FILES} ${PROJECT_SOURCE_FILES})

if (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  target_compile_options(${PROJECT_NAME} PRIVATE "/ZI")
  target_link_options(${PROJECT_NAME} PRIVATE "/SAFESEH:NO")
endif()