#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n, k;
    cin >> n >> k;
    if (k == 1)
    {
        cout << n << endl;
        return;
    }
    ll int ans = 0;
    while (true)
    {
        ans = ans + n % k;
        n = n / k;
        if (n == 0)
        {
            break;
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