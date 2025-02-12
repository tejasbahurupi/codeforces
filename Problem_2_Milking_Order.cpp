#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n, m, k;
    cin >> n >> m >> k;
    vector<ll int> a(m);
    for (ll int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    vector<pair<ll int, ll int>> pos;
    vector<ll int> ans(n + 1);
    for (ll int i = 0; i < k; i++)
    {
        ll int x, y;
        cin >> x >> y;
        pos.pb({x, y});
        ans[y] = x;
    }
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