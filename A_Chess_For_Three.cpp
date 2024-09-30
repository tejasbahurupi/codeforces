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
    int p1, p2, p3;
    cin >> p1 >> p2 >> p3;
    if ((p1 + p2 + p3) & 1)
    {
        cout << -1 << endl;
        return;
    }

    int ans = 0;
    if ((p1 + p2) <= p3)
    {
        ans = p1 + p2;
    }
    else
    {
        ans = p3 + (p1 + p2 - p3) / 2;
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