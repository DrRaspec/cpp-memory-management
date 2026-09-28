#include "helpers.h"

#include <iostream>
#include <limits>
#include <unistd.h>

void printMessage(const std::string& message) {
    std::cout << message << '\n';
}

int readInt(const std::string& message) {
    int value{};

    while (true) {
        std::cout << message;

        if (std::cin >> value) {
            std::cin.ignore(
                std::numeric_limits<std::streamsize>::max(),
                '\n'
            );

            return value;
        }

        printMessage("Invalid input. Please enter a valid integer.");

        std::cin.clear();

        std::cin.ignore(
            std::numeric_limits<std::streamsize>::max(),
            '\n'
        );
    }
}

std::string readString(const std::string& message) {
    std::string value;

    std::cout << message;
    std::getline(std::cin, value);

    return value;
}

void pauseScreen() {
    std::cout << "\nPress Enter to continue...";
    std::cin.get();
}

void sleepSeconds(int seconds) {
    unsigned int microseconds = 1000000;

    usleep(seconds * microseconds);
}