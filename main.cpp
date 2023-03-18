#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::cout << "Github Actions Test" << std::endl;

    std::ifstream ifs("../../main.cpp");
    if (!ifs.is_open()) {
        std::cout << "Cannot Open File" << std::endl;
        return 0;
    }

    std::cout << "Here" << std::endl;

    for (std::string line; std::getline(ifs, line); ) {
        std::cout << line << std::endl;
    }

    return 0;
}