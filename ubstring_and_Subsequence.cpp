#include <iostream>
#include <algorithm>
#include <iomanip>
#include <bits/stdc++.h>
#include <vector>
#define fast_io  (ios_base:: sync_with_stdio(false),cin.tie(NULL));

    int   solve(std::string a, std::string b)
    {
        std::string s;

        s = a;
        int i = 0;
        int j = 0;
        int n = a.size();
        int m = b.size();
        while (i < n && j < m)
        {
            if (a[i] == b[j])
                j++;
            i++;
        }
        if (j == m)
           return (n);
        else
        {
            s = b;
            i = 0;
            j = 0;
            while (i < n && j < m)
            {
                if (a[i] == b[j])
                    i++;
                j++;
            }
            if (n == i)
                return (m);
            else
            {
                i = 0;
                j = 0;
                while (i < n)
                {
                    if (b.find(a[i]) != std::string::npos)
                            j++;
                    i++;
                }
                return (m + (n - j));
            }
            return (0);

        }
    }
    int main()
    {
        int t;
        std::cin >> t;
        std::vector<int>arr(t);
        int i =0;
        int m;
        while (i < t)
        {
            std::string a, b;
            std::cin >> a;
            std::cin >> b;
            m = solve(a, b);
            arr[i] = m;
            i++;
        }
        for(int j = 0;j < t;j++)
            std::cout << arr[j] << std::endl;

    }