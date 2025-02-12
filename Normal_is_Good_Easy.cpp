#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n;
    cin >> n;
    vector<ll int> a(n);
    ll int ans = 0;
    ll int cnt = 1;
    cin >> a[0];
    for (ll int i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == a[i - 1])
        {
            cnt++;
        }
        else
        {
            // cout << "  " << cnt << endl;
            ans += ((cnt) * (cnt + 1)) / 2;
            cnt = 1;
        }
    }

    ans += (cnt * (cnt + 1)) / 2;
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