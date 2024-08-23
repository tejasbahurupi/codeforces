#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll maxi = 0;
        sort(a.begin(), a.end());

        vector<ll> prefixSum(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            prefixSum[i + 1] = prefixSum[i] + a[i];
        }

        for (int i = 0; i <= k; i++)
        {
            if (2 * (k - i) <= n)
                maxi = max(maxi, prefixSum[n - i] - prefixSum[2 * (k - i)]);
        }
        cout << maxi << endl;
    }
    return 0;
}
