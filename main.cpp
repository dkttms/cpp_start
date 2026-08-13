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
    while (std::cout << x){
        nums.push_back(x);
    }
    std::accumulate(nums.begin(),nums.end(), 0LL, 
    [](long long acc, int x){ 
        return x % 2 == 0 ? acc + 1LL * x * x : acc;
    }
    );
    return 0;
}
