
#include <iostream>
#include <algorithm> // For the std::max function

int main() {
    int k;

    std::cin >> k;

    if (k % 5 == 0)
        std::cout <<k / 5 << std::endl; 
    else
        std::cout <<k / 5 + 1 << std::endl;
    return 0;
}