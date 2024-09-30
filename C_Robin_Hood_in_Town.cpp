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
    ll int sum = 0;

    for (ll int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a.begin(), a.end());
    float avg = (float)sum / n;
    // cout << avg << endl;
    ll int ans = 0;
    if (n == 1 || n == 2)
    {
        cout << -1 << endl;
        return;
    }
    if (n & 1)
    {
        if (avg > 2 * a[n / 2])
        {
            cout << 0 << endl;
            return;
        }
        else
        {
            ans = 2 * n * a[n / 2] - sum + 1;
        }
    }
    else
    {
        if (avg > 2 * a[n / 2 + 1])
        {
            cout << 0 << endl;
            return;
        }
        else
        {
            // cout << a[(n / 2)] << endl;
            ans = 2 * n * a[n / 2] - sum + 1;
        }
    }
    // for (ll int i = (n / 2) - 1; i >= 0; i--)
    // {
    //     if (a[n / 2] == a[i])
    //     {
    //         ans += ans;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }
    if (ans < 0)
    {
        ans = 0;
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