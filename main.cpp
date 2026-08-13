#include <iostream>
#include <cmath>
#include <algorithm>

int main() {
    std::string s = "hello";
    std:: string r(s.rbegin(), s.rend());
    std::cout << r << "\n";
    return 0;
}
