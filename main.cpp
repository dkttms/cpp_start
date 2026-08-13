#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <sstream>
#include <unordered_set>

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;

}


int main() {
    std::string line;
    std::getline(std::cin, line);
    std::unordered_set<std::string> seen;
    std::istringstream iss(line);
    std::string word;
    while (iss >> word) seen.insert(word);
    std::cout << seen.size() << "\n";
    return 0;
}
