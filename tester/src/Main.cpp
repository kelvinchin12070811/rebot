#include <iostream>

#include "rebot/Version.hpp"
#include "rebot/Test.hpp"

int main(int argc, char **argv) {
    static_cast<void>(argc);
    static_cast<void>(argv);

    std::cout << rebot::RebotVersion << std::endl;
    std::cout << rebot::hi() << std::endl;

    system("pause");
    return 0;
}