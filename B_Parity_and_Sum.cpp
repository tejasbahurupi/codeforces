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
    ll int cnteven = 0, cntodd = 0;
    ll int maxodd = 0;
    vector<ll int> even;
    for (ll int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
        if (a[i] & 1)
        {
            cntodd++;
            maxodd = max(maxodd, a[i]);
        }
        else
        {
            cnteven++;
            even.pb(a[i]);
        }
    }
    if (cnteven == 0 || cntodd == 0)
    {
        cout << 0 << endl;
        return;
    }
    sort(a.begin(), a.end());
    ll int ans = 0;
    sort(even.begin(), even.end());
    for (int i = 0; i < even.size(); i++)
    {
        if (even[i] < maxodd)
        {
            ans++;
            maxodd += even[i];
        }
        else
        {
            ans += 2;
            maxodd += even[even.size() - 1];
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