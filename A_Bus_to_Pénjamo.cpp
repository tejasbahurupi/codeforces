#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n, r;
    cin >> n >> r;
    ll int ans = 0;
    ll int unhappy = 0;
    for (ll int i = 0; i < n; i++)
    {
        ll int x;
        cin >> x;
        if (x & 1)
        {
            ans += (x - 1);
            unhappy++;
            r -= (x - 1) / 2;
        }
        else
        {
            ans += x;
            r -= (x / 2);
        }
    }
    if (unhappy <= r)
    {
        cout << ans + unhappy << endl;
    }
    else
    {
        cout << ans + (2 * r - unhappy) << endl;
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