#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n, x;
    cin >> n >> x;
    vector<ll int> a(n);
    ll int sum = 0;
    for (ll int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a.begin(), a.end());
    // for (auto x : a)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
    ll int left = 1;
    ll int right = 1e18;
    ll int ans = 0;
    while (left <= right)
    {
        ll int h = left + (right - left) / 2;
        long long curr = 0;
        for (ll int i = 0; i < n; i++)
        {
            if (h > a[i])
                curr += (h - a[i]);
            else
                break;
        }
        if (curr == x)
        {
            cout << h << endl;
            return;
        }
        else if (curr > x)
        {
            ans = h - 1;
            right = h - 1;
        }
        else
        {
            left = h + 1;
        }
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