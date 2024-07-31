    #include <iostream>
    #include <algorithm>
    #include <iomanip>
    #include <bits/stdc++.h>
    #include <cstdlib>
    using namespace std;

    int main()
    {
        vector<int> arr(3);
        int n, m, k;
        cin >> n >> m >> k;
        arr[0] = n;
        arr[1] = m;
        arr[2] = k;
        sort(arr.begin(), arr.end());
        int med = arr[1];
        int total_d;
        total_d = abs(med - arr[0]) + abs(med - arr[1]) + abs(med - arr[2]);
        cout << total_d;
    }