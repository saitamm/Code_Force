    #include <iostream>
    #include <algorithm>
    #include <iomanip>
    #include <bits/stdc++.h>
    using namespace std;
    void solve(int n, int m, int k)
    {
        vector<int> arr(n);
        for(int i = 0;i < n; i++)
            arr[i] = i+1;
        reverse(arr.begin(), arr        .end());
        reverse(arr.begin() + (n - m), arr.end());
        for(int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout <<endl;
    }

    int main()
    {
        int t;

        cin >> t;
        while (t--)
        {
            int n, m, k;
            cin >> n >> m >> k;
            solve(n, m , k);
        }
    }