#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    ll int n;
    cin >> n;
    vector<ll int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<>());
    vector<ll int> cnts(n);
    ll int j = 0;
    ll int ans = 1;
    for (ll int i = 0; i < n; i++)
    {
        cnts[i] = n - (upper_bound(a.begin(), a.end(), b[i]) - a.begin());
        ans = (ans % mod * (cnts[i] - i) % mod) % mod;
    }
    // for (auto x : a)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
    // for (auto x : cnts)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;

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