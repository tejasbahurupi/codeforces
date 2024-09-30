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
    ll int n, m, q;
    cin >> n >> m >> q;
    vector<ll int> b(2);
    for (ll int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    vector<ll int> a(q);
    for (ll int i = 0; i < q; i++)
    {
        cin >> a[i];
    }
    ll int ta = b[0];
    ll int tb = b[1];
    ll int d = a[0];

    if (d == ta || d == tb)
    {
        cout << d << endl;
    }
    if (d < ta && d < tb)
    {
        cout << min(ta, tb) - 1 << endl;
    }
    else if (d > ta && d > tb)
    {
        cout << n - max(ta, tb) << endl;
    }
    else
    {
        cout << (ta + tb) / 2 - min(ta, tb) << endl;
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
