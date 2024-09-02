#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <string.h>
#include <math.h>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (auto i : mp)
    {
        if (i.second > 1)
        {
            cnt++;
        }
    }
    if (cnt < 2)
    {
        cout << -1 << endl;
        return;
    }
    vector<int> b(n, 1);
    int k = 2;
    for (int i = 1; i <= n; i++)
    {
        if (mp[a[i]] > 1)
        {
            b[i] = k;
            k++;
            mp[a[i]] = 1;
        }
        if (k > 3)
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}