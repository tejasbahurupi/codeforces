#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n;
    cin >> n;

    vector<ll int> a(n);
    for (ll int i = 0; i < n; i++)
        cin >> a[i];
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (n == 2)
    {
        cout << ceil(1.0 * (a[1] - a[0]) / 2) << endl;
        return;
    }
    map<ll int, ll int> map;
    set<ll int> set;
    // vector<ll int> b;
    for (ll int i = 1; i < n; i++)
    {
        if (i != (n - 1))
            set.insert(min(a[i] - a[i - 1], a[i + 1] - a[i])), map[min(a[i] - a[i - 1], a[i + 1] - a[i])]++;
        else
            set.insert(a[i] - a[i - 1]), map[a[i] - a[i - 1]]++;
    }
    ll int cnt = 0;
    ll int ans = 0;
    // for (auto x : set)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
    if (set.size() >= 2)
    {
        auto it = set.end();
        --it;
        if (map[*it] > 1)
        {
            cout << *it << endl;
            return;
        }
        else
        {
            it--;
            cout << *it << endl;
            return;
        }
    }
    else
    {
        cout << *set.begin() << endl;
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
        solve();
    return 0;
}
