#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n, k;
    cin >> n >> k;
    ll int ans = 0;
    for (ll int i = 0; i < k; i++)
    {
        ans += pow(n, i);
    }
    cout << ans % 1000000007 << endl;
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