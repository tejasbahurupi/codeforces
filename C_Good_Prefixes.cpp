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
    ll int ans = 0;
    ll int sum = 0;
    ll int maxele = 0;
    for (ll int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        maxele = max(maxele, a[i]);
        if ((sum - maxele) == maxele)
        {
            ans++;
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