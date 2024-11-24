module;

#include <print>

export module towns.a;

int hidden() { return 42; }

export void printMessage() { std::println("The hidden value is {}", hidden()); }
