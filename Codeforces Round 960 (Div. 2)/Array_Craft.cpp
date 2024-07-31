#include <bits/stdc++.h>

   #include <iostream>
#include <vector>
using namespace std;

void solve(int n, int x, int y) {
    vector<int> a(n, 1); // Initialize all elements to 1

    // Set the range from y to x-1 to -1, if applicable
    for (int i = y; i < x - 1; ++i) {
        a[i] = -1;
    }

    // Output the constructed array
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        solve(n, x, y);
    }
    return 0;
}
