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
    vector<ll int> a(n);
    vector<ll int> b(n);
    vector<ll int> maxa(2 * n + 1, 0);
    vector<ll int> maxb(2 * n + 1, 0);
    cin >> a[0];
    ll int p = 0;
    for (ll int i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i] != a[i - 1])
        {
            maxa[a[i - 1]] = max(maxa[a[i - 1]], i - p);
            p = i;
        }
    }
    maxa[a[n - 1]] = max(maxa[a[n - 1]], n - p);

    cin >> b[0];
    p = 0;
    for (ll int i = 1; i < n; i++)
    {
        cin >> b[i];
        if (b[i] != b[i - 1])
        {
            maxb[b[i - 1]] = max(maxb[b[i - 1]], i - p);
            p = i;
        }
    }
    maxb[b[n - 1]] = max(maxb[b[n - 1]], n - p);

    ll int ans = 0;
    for (ll int i = 1; i < (2 * n + 1); i++)
    {
        ans = max(ans, maxa[i] + maxb[i]);
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