#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <string.h>
#include <math.h>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int x, y, k;
    cin >> x >> y >> k;
    int a;
    if (y - x % y > k)
    {
        cout << x + k << endl;
        return;
    }
    x += (y - x % y);
    k -= (y - x % y);
    k = k % (y - x % y);
    while (x % y == 0)
    {
        x = x / y;
    }
    cout << x << endl;
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