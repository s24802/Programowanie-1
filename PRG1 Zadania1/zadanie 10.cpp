#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main() {
    std::cout << "Wprowadz zdanie: " << std::endl;
    std::string str;
    std::vector<std::string> v;
    getline(std::cin, str);
    std::istringstream ss(str);
    size_t max_length = 0;
    do {
        std::string temp;
        ss >> temp;
        if (temp.length() != 0)
            v.push_back(temp);
        max_length = std::max(max_length, temp.length());
    } while(ss);
    std::cout << "***";
    for (size_t i = 0; i < max_length; i++)
        std::cout << "*";
    std::cout << "*" << std::endl;
    for (auto &i : v) {
        std::cout << "* ";
        auto sp = max_length - i.length();
        for (size_t j = 0; j < sp/2; j++)
            std::cout << " ";
        std::cout << i;
        for (size_t j = 0; j < sp - sp/2; j++)
            std::cout << " ";
        std::cout << " *" << std::endl;
    }
    std::cout << "**";
    for (size_t i = 0; i < max_length; i++)
        std::cout << "*";
    std::cout << "**" << std::endl;
    return 0;
}
