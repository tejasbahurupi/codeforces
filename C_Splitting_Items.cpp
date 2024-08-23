#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <string.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll int k;
        cin >> n >> k;
        vector<ll int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll int scorea = 0;
        ll int scoreb = 0;
        sort(a.rbegin(), a.rend());
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                scorea += a[i];
            else
                scoreb += a[i];
        }
        ll int ans = scorea - scoreb;
        for (int i = 1; i < n; i += 2)
        {
            if (a[i] != a[i - 1])
            {
                ans -= min(a[i - 1] - a[i], k);
                k -= min(a[i - 1] - a[i], k);
            }
        }
        cout << max(ans, 0ll) << endl;
    }
    return 0;
}