#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    ll int n, m, o;
    cin >> n >> m >> o;
    for (ll int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        string ans;
        for (ll int j = 0; j < m; j++)
        {
            for (ll int k = 0; k < o; k++)
                ans += s[j];
        }
        for (ll int k = 0; k < o; k++)
            cout << ans << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }
    return 0;
}