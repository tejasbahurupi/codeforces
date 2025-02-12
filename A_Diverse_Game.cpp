#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n, m;
    cin >> n >> m;
    if (n * m == 1)
    {
        ll int x;
        cin >> x;
        cout << -1 << endl;
        return;
    }
    vector<vector<ll int>> a(n, vector<ll int>(m));
    ll int p = n * m;
    for (ll int i = 0; i < n; i++)
    {
        for (ll int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == p)
                cout << 1 << " ";
            else
                cout << a[i][j] + 1 << " ";
        }
        cout << endl;
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
        solve();
    return 0;
}