#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n;
    cin >> n;
    if (n & 1 || n < 4)
    {
        cout << -1 << endl;
        return;
    }
    if (n % 6 == 0)
    {
        cout << n / 6 << " ";
    }
    else
    {
        cout << n / 6 + 1 << " ";
    }
    if (n % 4 == 0)
    {
        cout << n / 4 << endl;
    }
    else if (n % 2 == 0)
    {
        cout << n / 4 << endl;
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