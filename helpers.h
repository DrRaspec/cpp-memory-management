#ifndef HELPERS_H
#define HELPERS_H

#include <string>

void printMessage(const std::string& message);

int readInt(const std::string& message);

std::string readString(const std::string& message);

void pauseScreen();

void sleepSeconds(int seconds);

#endif