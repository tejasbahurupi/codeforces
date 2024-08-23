#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int max1 = INT_MIN;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i % 2 == 0)
        {
            // cout << a[i] << endl;
            max1 = max(max1, a[i]);
        }
    }
    cout << max1 << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}