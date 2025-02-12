#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n;
    cin >> n;
    vector<ll int> x(n), y(n);
    for (ll int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (ll int i = 0; i < n; i++)
    {
        cin >> y[i];
    }
    vector<ll int> diff;
    ll int ans = 0;
    for (ll int i = 0; i < n; i++)
    {
        diff.pb(y[i] - x[i]);
    }
    sort(diff.begin(), diff.end());
    ll int l = 0;
    ll int r = n - 1;
    while (l < r)
    {
        if (diff[l] + diff[r] >= 0)
        {
            ans++;
            r--;
        }
        l++;
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