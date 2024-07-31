#include <bits/stdc++.h>

int solve(const std::string &a)
{
    if (a.size() >= 3) {
        if ((a[0] == 'Y' || a[0] == 'y') &&
            (a[1] == 'e' || a[1] == 'E') &&
            (a[2] == 'S' || a[2] == 's')) 
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int k;
    std::cin >> k;
    std::vector<int> arr(k);

    for(int i = 0; i < k; i++)
    {
        std::string str;
        std::cin >> str;
        arr[i] = solve(str);
    }

    for(int i = 0; i < k; i++)
    {
        if (arr[i] == 0)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }

    return 0;
}
