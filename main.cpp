#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <vector>


void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;

}


int main() {
    std::vector<int> nums;
    int x;
    while (std::cin >> x) nums.push_back(x);

    auto max = std::max_element(nums.begin(), nums.end());

    std::cout << *max << "\n";
    return 0;
}
