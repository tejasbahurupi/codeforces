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
    ll int n;
    cin >> n;
    vector<vector<ll int>> a(n);
    ll int mins = INT_MAX;
    ll int minsind;
    ll int mins2 = INT_MAX;
    for (ll int i = 0; i < n; i++)
    {
        ll int m;
        cin >> m;
        vector<ll int> b(m);
        ll int min1 = INT_MAX;
        ll int min2 = INT_MAX;
        for (ll int j = 0; j < m; j++)
        {
            ll int x;
            cin >> b[j];
            // min1 = b[0];
            if (min1 > b[j])
            {
                min2 = min1;
                min1 = b[j];
            }
            else if (min2 > b[j])
            {
                min2 = b[j];
            }
        }
        if (min1 > min2)
        {
            swap(min1, min2);
        }
        if (min1 <= mins)
        {
            mins = min1;
        }
        if (mins2 > min2)
        {
            mins2 = min2;
            minsind = i;
        }
        // cout << mins << "  " << min1 << endl;
        a[i].pb(min1);
        a[i].pb(min2);
    }
    ll int ans = mins;
    ll int y;
    // cout << mins << endl;
    for (ll int i = 0; i < n; i++)
    {
        // cout << "  " << a[i][1] << endl;
        ans += a[i][1];
    }
    // cout << "   " << a[minsind][1] << endl;
    cout << ans - a[minsind][1] << endl;
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