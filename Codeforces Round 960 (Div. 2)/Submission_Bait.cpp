#include <bits/stdc++.h>

int   solve(std::vector<int> &arr)
{
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    int k = 1;
    int tmp = 1;

    for (int  i =0;i < arr.size(); i++)
    {
        if (arr[i+1] == arr[i])
            tmp++;
        else
            {
                if (tmp % 2 == 1)
                    {
                        k =0;
                        break;
                    }
                else
                    tmp = 1;
            }
    }
    if (tmp % 2 == 1 && k)
        return (1);
    return (0);
}
int main()
{
    int n;
    std::cin >> n;
    std::vector<int>a(n);
    for(int i = 0;i < n;i++)
    {
        int z;
        std::cin >> z;
        std::vector<int>arr(z);
        for(int j = 0;j < z; j++)
            std::cin >> arr[j];
        a[i] = solve(arr);
    }
    for (int i = 0;i < n; i++)
        {
            if (a[i] ==1 )
                std::cout << "NO\n";
            else
                std::cout << "YES\n";
        }
}