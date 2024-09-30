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
    vector<pair<ll int, ll int>> a(n);
    vector<pair<ll int, ll int>> b(n);
    vector<pair<ll int, ll int>> c(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.pb({x, i});
    }
    sort(a.begin(), a.end(), greater<pair<ll int, ll int>>());

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.pb({x, i});
    }
    sort(b.begin(), b.end(), greater<pair<ll int, ll int>>());

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        c.pb({x, i});
    }
    sort(c.begin(), c.end(), greater<pair<ll int, ll int>>());
    ll int ans = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (a[i].second != b[j].second && a[i].second != c[k].second && b[j].second != c[k].second)
                {
                    ll int sum = a[i].first + b[j].first + c[k].first;
                    ans = max(ans, sum);
                }
            }
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