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
    ll int ans = 0;
    x = ceil(1.0 * x / k);
    y = ceil(1.0 * y / k);

    if (y >= x)
    {
        ans += 2 * y;
    }
    else
    {
        ans += 2 * x - 1;
    }
    cout << ans << endl;
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