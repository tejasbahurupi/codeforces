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

long long lcm(ll int a, ll int b)
{
    return (a / __gcd(a, b)) * b;
}
void solve()
{
    ll int n, a, b;
    cin >> n >> a >> b;
    ll int x = min(a, b);
    ll int y = max(a, b);
    vector<ll int> z(n);
    for (ll int i = 0; i < n; i++)
    {
        /* code */
        cin >> z[i];
        z[i] %= __gcd(a, b);
    }
    sort(z.begin(), z.end());
    ll int ans = z[n - 1] - z[0];
    for (int i = 1; i < n; i++)
    {
        ans = min(ans, (z[i - 1] - z[i] + __gcd(a, b)));
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