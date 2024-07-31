#include <iostream>
#include <algorithm> // For the std::max function

int main() {
    int k, n, w;

    std::cin >> k >> n >> w;

    int cost = k * w * (w + 1) / 2;
    int l = std::max(0, cost - n);
    std::cout << l << std::endl;

    return 0;
}
