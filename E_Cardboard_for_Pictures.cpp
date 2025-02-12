#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n, c;
    cin >> n >> c;
    vector<ll int> a(n);
    for (ll int i = 0; i < n; i++)
        cin >> a[i];
    ll int l = 1, r = 1e9;
    while (l <= r)
    {
        ll int mid = l + (r - l) / 2;
        ll int sum = 0;
        for (ll int i = 0; i < n; i++)
        {
            sum += (a[i] + 2 * mid) * (a[i] + 2 * mid);
            if (sum > c)
                break;
        }
        if (sum == c)
        {
            cout << mid << "\n";
            return;
        }
        if (sum > c)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
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