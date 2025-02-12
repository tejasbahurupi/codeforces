#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);
    ll int n, m;
    cin >> n >> m;
    vector<pair<ll int, ll int>> a(n), b(m);
    for (ll int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    for (ll int i = 0; i < m; i++)
    {
        cin >> b[i].first >> b[i].second;
    }
    ll int ans = 0;
    ll int l1 = 0, l2 = 0;
    while (l1 < n && l2 < m)
    {
        if (a[l1].second < b[l2].second)
            ans = max(ans, b[l2].second - a[l1].second);

        if (a[l1].first > b[l2].first)
        {

            a[l1].first -= b[l2].first;
            l2++;
        }
        else if (a[l1].first == b[l2].first)
        {
            l1++, l2++;
        }
        else
        {
            b[l2].first -= a[l1].first;
            l2++;
        }
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
