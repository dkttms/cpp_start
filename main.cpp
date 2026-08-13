#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>

int main() {
    int number;
    std::cin >> number;
    if ((number % 15) == 0){
        std::cout << "FizzBuzz" << "\n";
    }
    else if ((number % 3 ) == 0){
        std::cout << "Fizz" << "\n";
    }
    else if ((number % 5 ) == 0){
        std::cout << "Buzz" << "\n";
    }
    else {
        std::cout << number << "\n";
    }
    return 0;
}
