#include <bits/stdc++.h>


std::vector<int> solve(std::vector<int> &a, int n, int m)
{
    for (int i = 0;i <a.size();i++)
        a[i] = 1;
    

}
int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n,m,k;
        std::cin >> n >> m >> k;
        std::vector<int>a(n);
        a = solve(a, n, m);
    }
}
