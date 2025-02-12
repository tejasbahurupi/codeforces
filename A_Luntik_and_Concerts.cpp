#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int a, b, c;
    cin >> a >> b >> c;
    a = a;
    b = b;
    c = c;
    ll int x = 0;
    ll int y = 0;
    // for (ll int i = 0; i < c; i++)
    // {
    //     if (x > y)
    //     {
    //         y += 3;
    //     }
    //     else
    //     {
    //         x += 3;
    //     }
    // }
    x += ((c / 2) * 3);
    y += ((c - (c / 2))) * 3;
    x += (c / 2) * 2;
    y += ((c - (c / 2))) * 2;
    x += (c / 2);
    y += ((c - (c / 2)));
    // for (ll int i = 0; i < b; i++)
    // {
    //     if (x > y)
    //     {
    //         y += 2;
    //     }
    //     else
    //     {
    //         x += 2;
    //     }
    // }
    // for (ll int i = 0; i < a; i++)
    // {
    //     if (x > y)
    //     {
    //         y += 1;
    //     }
    //     else
    //     {
    //         x += 1;
    //     }
    // }
    cout << abs(y - x) << endl;
    // cout << (a + c) % 2 << endl;
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