#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;

}


int main() {
    int a;
    int b;
    std::cin >> a >> b;
    swap(a,b);
    std::cout << a << " " << b << "\n";
    return 0;
}
