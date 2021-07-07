#include <iostream>

#include <rebot/Version.hpp>
#include <rebot/types/Chat.hpp>
#include <rebot/types/Message.hpp>
#include <rebot/types/MessageEntity.hpp>

int main(int argc, char **argv) {
    static_cast<void>(argc);
    static_cast<void>(argv);

    std::cout << rebot::RebotVersion << std::endl;
    rebot::types::User user { 23, false, "kelvin", "chin" };

    system("pause");
    return 0;
}