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
    map<ll int, ll int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] -= i;
        mp[a[i]]++;
    }
    // for (auto x : mp)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }
    ll int cnt = 0;
    for (auto x : mp)
    {
        if (x.second > 1)
        {
            cnt += (x.second) * (x.second - 1) / 2;
        }
    }
    cout << cnt << endl;
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