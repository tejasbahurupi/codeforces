#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n, m, r, c;
    cin >> n >> m >> r >> c;
    ll int ans = 0;
    ans += n * m - ((r - 1) * m + c);
    ans += (n - r) * (m - 1);

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
        solve();
    return 0;
}