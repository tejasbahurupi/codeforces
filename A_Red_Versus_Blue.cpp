#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n, r, b;
    cin >> n >> r >> b;
    ll int x = r / (b + 1);
    ll int y = r % (b + 1);

    for (ll int i = 0; i < b + 1; i++)
    {
        for (ll int j = 0; j < x; j++)
        {
            cout << "R";
        }
        if (y > 0)
        {
            cout << "R";
            y--;
        }
        if (i < b)
            cout << "B";
    }
    cout << endl;
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
