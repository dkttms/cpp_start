#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>

int main() {
    std::string name;
    int age;
    std::getline(std::cin, name);
    std:: cin >> age;
    std::cout << "Hi, " << name << "! " << "You are " << age << " years old.\n";
    return 0;
}
