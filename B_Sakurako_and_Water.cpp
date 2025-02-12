#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n;
    cin >> n;
    vector<vector<ll int>> a(n, vector<ll int>(n));
    for (ll int i = 0; i < n; i++)
    {
        for (ll int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    ll int l = n - 1, r = 0;
    ll int ans = 0;
    for (ll int i = n - 1; i >= 0; i--)
    {
        ll int currmax = 0;
        l = i, r = 0;
        while (l < n && r < n)
        {
            if (a[l][r] < 0)
            {
                currmax = min(currmax, a[l][r]);
                // cout << currmax << endl;
            }
            l++;
            r++;
        }
        ans += abs(currmax);
    }
    l = 0, r = 0;
    for (ll int j = 1; j < n; j++)
    {
        ll int currmax = 0;
        l = 0, r = j;
        while (l < n && r < n)
        {
            if (a[l][r] < 0)
            {
                currmax = min(currmax, a[l][r]);
            }
            l++;
            r++;
        }
        ans += abs(currmax);
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