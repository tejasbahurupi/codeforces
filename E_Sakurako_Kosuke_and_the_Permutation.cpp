#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n;
    cin >> n;
    vector<ll int> a(n + 1);
    unordered_map<ll int, ll int> map;
    for (ll int i = 1; i <= n; i++)
    {
        cin >> a[i];
        map[a[i]] = i;
    }
    ll int ans = 0;
    for (ll int i = 1; i < n; i++)
    {
        if (a[i] == i)
            continue;
        if (a[a[i]] == i)
            continue;
        // cout << a[map[i]] << " " << a[a[i]] << endl;

        swap(a[map[i]], a[a[i]]);
        swap(map[a[a[i]]], map[a[map[i]]]);
        ans++;
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