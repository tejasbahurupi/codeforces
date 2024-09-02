#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
// #include <limits>
#include <string.h>
#include <math.h>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n, k;
    cin >> n >> k;
    vector<ll int> have(n);
    vector<ll int> need(n);

    for (int i = 0; i < n; i++)
    {
        cin >> need[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> have[i];
    }
    ll int l = 0, r = 1e10;
    int ans = 0;
    while (l <= r)
    {
        ll int mid = (r - l) / 2 + l;
        vector<ll int> req(n, 0);
        ll int extra = 0;
        for (ll int i = 0; i < n; i++)
        {
            req[i] = mid * need[i];
            if (req[i] > have[i])
            {
                extra += (req[i] - have[i]);
            }
            if (extra > k)
            {
                break;
            }
        }
        if (extra <= k)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}