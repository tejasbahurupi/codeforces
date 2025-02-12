#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n, q;
    cin >> n >> q;
    vector<ll int> a(n), prefixsum(n), prefmax(n);
    cin >> a[0];
    prefixsum[0] = a[0];
    prefmax[0] = a[0];
    for (ll int i = 1; i < n; i++)
    {
        cin >> a[i];
        prefixsum[i] = a[i] + prefixsum[i - 1];
        if (a[i] > prefmax[i - 1])
        {
            prefmax[i] = a[i];
        }
        else
        {
            prefmax[i] = prefmax[i - 1];
        }
    }
    for (ll int i = 0; i < q; i++)
    {
        ll int p;
        cin >> p;
        ll int u = upper_bound(prefmax.begin(), prefmax.end(), p) - prefmax.begin();
        if (u == 0)
        {
            cout << 0 << " ";
            continue;
        }
        cout << prefixsum[u - 1] << " ";
    }
    cout << endl;
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
