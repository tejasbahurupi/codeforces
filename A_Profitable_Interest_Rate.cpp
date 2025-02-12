#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int a, b;
    cin >> a >> b;
    if (a >= b)
    {
        cout << a << endl;
    }
    else
    {
        if (b - a <= a)
        {
            cout << a - (b - a) << endl;
        }
        else
        {
            cout << 0 << endl;
        }
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