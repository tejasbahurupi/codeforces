#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;
    if (x + 1 == y)
    {
        cout << "Yes" << endl;
        return;
    }
    if ((x + 1) > y && (x - y + 1) % 9 == 0)
    {
        cout << "Yes" << endl;
        return;
    }
    cout << "No" << endl;
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