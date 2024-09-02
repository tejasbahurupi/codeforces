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
    ll n;
    cin >> n;
    vector<ll> p(n);
    vector<int> ans(n, 0);
    vector<int> visited(n, 0);

    for (ll i = 0; i < n; i++)
    {
        cin >> p[i];
        p[i]--;
    }

    string s;
    cin >> s;

    for (ll i = 0; i < n; i++)
    {
        if (visited[i])
            continue;

        vector<ll> group;
        ll x = i;

        while (visited[x] == 0)
        {
            visited[x] = 1;
            group.pb(x);
            x = p[x];
        }

        int blacks = 0;
        for (ll int x : group)
        {
            if (s[x] == '0')
                blacks++;
        }
        for (ll int x : group)
        {
            ans[x] = blacks;
        }
    }
    for (ll int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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
