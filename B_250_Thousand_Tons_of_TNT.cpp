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
    ll int n;
    cin >> n;
    vector<ll int> a(n);
    for (ll int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i)
            a[i] += a[i - 1];
    }
    ll int ans = 0;
    ll int k = 1;
    while (n >= k)
    {
        if (n % k == 0)
        {
            ll int minsum = 1e18;
            ll int maxsum = 0;
            for (ll int i = k; i <= n; i += k)
            {
                if (i - k - 1 < 0)
                {
                    minsum = min(minsum, a[i - 1]);
                    maxsum = max(maxsum, a[i - 1]);
                }
                else
                {
                    minsum = min(minsum, a[i - 1] - a[i - k - 1]);
                    maxsum = max(maxsum, a[i - 1] - a[i - k - 1]);
                }
                // cout << minsum << " " << maxsum << " " << endl;
            }
            ans = max(maxsum - minsum, ans);
            // cout << ans << endl;
        }
        k++;
    }
    cout << ans << endl;
    // cout << endl;
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