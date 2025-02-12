#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n, x;
    cin >> n >> x;
    map<ll int, ll int> map;
    vector<ll int> a(n);
    bool flag = true;
    for (ll int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (flag && map.find(x - a[i]) != map.end())
        {
            cout << min(map[x - a[i]], i + 1) << " " << max(i + 1, map[x - a[i]]) << endl;
            flag = false;
        }
        map[a[i]] = i + 1;
    }
    if (flag)
        cout << "IMPOSSIBLE" << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int t;
    // cin>>t;
    // while(t--)
    solve();
    return 0;
}