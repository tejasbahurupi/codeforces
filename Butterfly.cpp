#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int r, g, b;
    cin >> r >> g >> b;
    if (r < (g + b) && g < (r + b) && b < (r + g))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
    {
        solve();
    }
    return 0;
}