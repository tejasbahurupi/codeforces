#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int a, b, c;
    cin >> a >> b >> c;
    ll int x = 1, y = 3;
    for (int i = 1; i < a; i++)
        x = x * 10;
    for (int i = 1; i <= b - c; i++)
        y = y * 10 + 3;
    for (int i = 1; i < c; i++)
        y = y * 10;
    cout << x << " " << y << endl;

    // cout << x << endl;
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