#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n;
    cin >> n;
    ll int ans = 0;
    ll int res = 2;
    for (ll int i = 2; i <= n; i++)
    {
        ll int curr = 0;
        for (ll int j = 1; j <= n; j++)
        {
            if (i * j <= n)
                curr += i * j;
            else
                break;
        }
        if (curr > ans)
        {
            ans = curr;
            res = i;
        }
    }
    cout << res << endl;
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