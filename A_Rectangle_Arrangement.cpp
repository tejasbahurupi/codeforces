#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n;
    cin >> n;
    vector<pair<ll int, ll int>> dim(n);
    for (ll int i = 0; i < n; i++)
        cin >> dim[i].first >> dim[i].second;
    ll int max1 = 0, max2 = 0;
    for (ll int i = 0; i < n; i++)
    {
        if (dim[i].first > max1)
        {
            max1 = dim[i].first;
        }
    }
    for (ll int i = 0; i < n; i++)
    {
        if (dim[i].second > max2)
        {
            max2 = dim[i].second;
        }
    }
    cout << 2 * max1 + 2 * max2 << endl;
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