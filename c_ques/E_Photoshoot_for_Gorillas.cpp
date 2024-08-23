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
        int n, m, k;
        cin >> n >> m >> k;
        ll int w;
        cin >> w;
        vector<ll int> a(w);
        for (int i = 0; i < w; i++)
        {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        vector<ll int> v;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int lbx = max(0, i - k + 1);
                int ubx = min(i, n - k);
                int lby = max(0, j - k + 1);
                int uby = min(j, m - k);
                int num = (ubx - lbx + 1) * (uby - lby + 1);
                // cout << num << endl;
                v.push_back(num);
            }
        }
        sort(v.rbegin(), v.rend());
        ll score = 0;
        for (int i = 0; i < w; i++)
        {
            score += v[i] * a[i];
        }
        cout << score << endl;
    }
    return 0;
}