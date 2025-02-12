#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n;
    cin >> n;
    if (n == 1)
    {
        cout << -1 << endl;
        return;
    }
    if (n == 2)
    {
        cout << 66 << endl;
        return;
    }
    if (n == 3)
    {
        cout << -1 << endl;
        return;
    }
    if (n == 4)
    {
        cout << 3366 << endl;
        return;
    }
    if (n & 1)
    {
        for (ll int i = 0; i < n - 4; i++)
            cout << 3;
        cout << 6366 << endl;
    }
    else
    {
        for (int i = 0; i < n - 4; i++)
            cout << 3;
        cout << 3366 << endl;
    }
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