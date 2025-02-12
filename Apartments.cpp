#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n, m, k;
    cin >> n >> m >> k;
    vector<ll int> a(n), b(m);
    for (ll int i = 0; i < n; i++)
        cin >> a[i];
    for (ll int i = 0; i < n; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll int ans = 0;
    ll int l = 0, r = 0;
    while (r < m && l < n)
    {
        if (a[l] - b[r] > k)
        {
            r++;
            continue;
        }
        if (a[l] - b[r] < (-k))
        {
            l++;
            continue;
        }

        r++;
        l++;
        ans++;
    }
    cout << ans << endl;
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