#include <iostream>
#include <string>

int main() {
    std::cout << "=== C++ Learning Journey - Day 1 ===" << std::endl;
    std::cout << "Welcome to my C++ adventure!" << std::endl;

    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Hello, " << name << "!" << std::endl;
    std::cout << "Let's master C++ together!" << std::endl;

    return 0;
}