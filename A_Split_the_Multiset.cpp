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
    int n, k;
    cin >> n >> k;
    int ans = 0;
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    if (n <= k)
    {
        cout << 1 << endl;
        return;
    }
    while (n > 1)
    {
        n -= (k - 1);
        ans++;
    }
    cout << ans << endl;
    return;
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