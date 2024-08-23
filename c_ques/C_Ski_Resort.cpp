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
    ll int n, k, q;
    cin >> n >> k >> q;
    vector<ll int> a(n);
    ll int cnt = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= q)
        {
            cnt++;
        }
        else
        {
            cnt = 0;
        }

        if (cnt >= k)
        {
            ans += (cnt - k + 1);
        }
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