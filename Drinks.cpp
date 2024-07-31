#include <iostream>
#include <algorithm>
#include <iomanip>


int main()
{
    int a,b,c,d;

    std::cin >> a;
    int i = 0;
    double k;
    while (i < a)
    {
        int b;
        std::cin >> b;
        k = k + b;
        i++;
    }
    k = k /a;
    std::cout << std::fixed << std::setprecision(9) << k << std::endl;
    }