#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int k;
    cin >> k;

    ll int l = 1;
    ll int r = 2e18;
    ll int ans = 0;

    while (l <= r)
    {
        ll int mid = l + ((r - l) / 2);
        ll int x = sqrtl(mid);
        // while (x * x > mid)
        //     x--;
        // while ((x + 1) * (x + 1) <= mid)
        //     x++;
        ll int On = mid - x;

        if (On >= k)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
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
