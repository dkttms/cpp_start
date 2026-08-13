#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>

int main() {
    int n;
    std::cin >> n;
    long long total = 0;
    for (int i = 1; i <= n; i++){
        total += i;
    }
    std::cout << total << "\n";
    return 0;
}
