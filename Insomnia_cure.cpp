#include <iostream>
#include <algorithm>

int main()
{
    int k,l,m,n,d;
    std::cin >> k;
    std::cin >> l;
    std::cin >> m;
    std::cin >> n;
    std::cin >> d;
    int i = 1;
    int count = 0 ;

    while (i <= d)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
            count++;
        i++;
    }
    std::cout << count <<std::endl;

}