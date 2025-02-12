#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n, x;
    cin >> n >> x;
    vector<ll int> a(n);
    for (ll int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    ll int ans = 0;
    ll int sum = 0;
    ll int l = 0, r = n - 1;
    while (l <= r)
    {
        if (a[l] + a[r] <= x)
        {
            l++;
            r--;
            ans++;
        }
        else
        {
            r--;
            ans++;
        }
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int t;
    // cin >> t;
    // while (t--)
    solve();
    return 0;
}