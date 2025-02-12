#include <bits/stdc++.h>
#include <iostream>
#define ll long long
#define pb push_back
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll ans = 0;
    vector<vector<ll>> a(n, vector<ll>(m));

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (ll j = 0; j < m; j++)
    {
        vector<ll> col;
        for (ll i = 0; i < n; i++)
        {
            col.pb(a[i][j]);
        }

        sort(col.begin(), col.end());

        ll prefixSum = 0;
        for (ll i = 0; i < n; i++)
        {
            ans += i * col[i] - prefixSum;
            prefixSum += col[i];
        }
        col.clear();
    }

    cout << ans << endl;
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
