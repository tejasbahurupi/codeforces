#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int x, y, k;
    cin >> x >> y >> k;
    x = min(x, y);
    y = min(x, y);
    cout << 0 << " " << 0 << " " << x << " " << y << endl;
    cout << x << " " << 0 << " " << 0 << " " << y << endl;
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