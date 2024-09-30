#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n;
    cin >> n;
    vector<pair<ll int, ll int>> a(n);
    for (ll int i = 0; i < n; i++)
    {
        ll int x;
        cin >> x;
        a[i].first = x;
        a[i].second = i;
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    ll int ans = 0;
    ll int cnt = 1;
    vector<ll int> pos(n);
    for (ll int i = 1; i < n; i += 2)
    {
        ans += 2 * cnt * (a[i - 1].first + a[i].first);
        pos[a[i - 1].second] = cnt;
        pos[a[i].second] = (-cnt);
        cnt++;
    }
    if (n & 1)
    {
        ans += 2 * a[n - 1].first * cnt;
        pos[a[n - 1].second] = cnt;
    }
    cout << ans << endl;
    cout << 0 << " ";
    for (auto x : pos)
    {
        cout << x << " ";
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