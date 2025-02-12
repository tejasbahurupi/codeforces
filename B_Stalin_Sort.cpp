#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n;
    cin >> n;
    vector<ll int> a(n);
    map<ll int, ll int> map;
    for (ll int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll int ans = LLONG_MAX;
    for (ll int i = 0; i < n; i++)
    {
        ll int curr = i;
        for (ll int j = i; j < n; j++)
        {
            if (a[i] < a[j])
                curr++;
        }
        ans = min(ans, curr);
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