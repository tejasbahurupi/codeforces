#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long

using namespace std;

void solve()
{
    ll int n;
    cin >> n;
    ll int a = 1;
    ll int b = 1;
    ll int ans = 1;
    ll int mod = 1e9 + 7;
    ans = (((n * (n + 1) % mod) % mod * (4 * n - 1)) % mod * 337) % mod;
    // ans = ans % mod;
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