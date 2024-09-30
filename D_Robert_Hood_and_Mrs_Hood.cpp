#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <string.h>
#include <math.h>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll n, d, k;
    cin >> n >> d >> k;
    vector<ll int> a(n + 2, 0);
    for (ll i = 0; i < k; i++)
    {
        ll l, r;
        cin >> l >> r;
        ll p1 = max(1LL, l - d + 1);
        ll p2 = min(n - d + 1, r);
        a[p1]++;
        a[p2 + 1]--;
    }
    // for(auto i: a)
    //     cout<<i<<' ';
    for (ll int i = 1; i <= n - d + 1; i++)
    {
        a[i] += a[i - 1];
    }
    ll currmax = -1, currmin = 1e18;
    ll bro = 0, mom = 0;
    for (ll i = 1; i <= n - d + 1; i++)
    {
        if (a[i] > currmax)
        {
            currmax = a[i];
            bro = i;
        }
        if (a[i] < currmin)
        {
            currmin = a[i];
            mom = i;
        }
    }

    cout << bro << ' ' << mom << endl;
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