#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
#define mod 10000000000000007
using namespace std;

void solve()
{
    ll int n;
    cin >> n;
    vector<ll int> a(n);
    ll int ans = 1;
    for (ll int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans *= a[i];
    }
    ans = ans + (n - 1);
    ans = ans * 2022;
    cout << ans % mod << endl;
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