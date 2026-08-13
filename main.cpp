#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>

int square(int n){
    return n*n;
}


int main() {
    int n;
    std::cin >> n;
    std::cout << square(n) << "\n";
    return 0;
}
