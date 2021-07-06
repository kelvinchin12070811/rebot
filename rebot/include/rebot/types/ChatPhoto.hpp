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
    std::string small_file_id;
    /**
     * @brief Unique file identifier of the small chat photo.
     * 
     * Unique file identifier of the small chat photo (160x160 px). Used to uniquely identify the chat photo,
     * can't use to download the photo.
     */
    std::string small_file_unique_id;
    /**
     * @brief File identifier of the large chat photo.
     * 
     * File identifier of the large chat photo (640x640 px), can be used only for photo download and only valid until
     * the photo changed.
     */
    std::string big_file_id;
    /**
     * @brief Unique file identifier of the large chat photo.
     * 
     * Unique file identifier of the large chat photo (640x640 px), Used to uniquely identify the chat photo,
     * can't use to download the photo.
     */
    std::string big_file_unique_id;
};
}