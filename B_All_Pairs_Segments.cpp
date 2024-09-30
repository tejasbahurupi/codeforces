#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n), queries(q);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<ll, ll> mp;
    mp[n - 1] = 2;

    for (ll i = 1; i < (n - 1); i++)
    {
        ll key = (i * (n - i - 1) + i + (n - i - 1));
        mp[key]++;
    }
    for (ll int i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] > 1)
            mp[i * (n - i)] += a[i] - a[i - 1] - 1;
    }

    // for (const auto &x : mp)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }

    for (ll i = 0; i < q; i++)
    {
        cin >> queries[i];
        if (mp.find(queries[i]) != mp.end())
        {
            cout << mp[queries[i]] << " ";
        }
        else
        {
            cout << 0 << " ";
        }
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
