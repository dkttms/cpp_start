#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <sstream>
#include <unordered_set>
#include <numeric>

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;

}


int main() {
    std::vector<long long> nums;
    long long x;
    while (std::cin >> x){
        nums.push_back(x);
    }
    long long sum = std::accumulate(nums.begin(),nums.end(), 0LL, 
    [](long long acc, int x){ 
        return x % 2 == 0 ? acc + x * x : acc;
    }
    );
    std::cout << sum << "\n";
    return 0;
}
