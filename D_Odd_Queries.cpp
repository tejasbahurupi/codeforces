#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{

    ll int n, q;
    cin >> n >> q;
    ll int sum = 0;
    vector<ll int> v(n + 1);
    vector<ll int> prefixSum(n + 1, 0);
    for (ll int i = 1; i <= n; i++)
    {
        cin >> v[i];
        sum += v[i];
        prefixSum[i] = prefixSum[i - 1] + v[i];
    }
    while (q--)
    {
        ll int l, r, k;
        cin >> l >> r >> k;
        ll int x = sum - (prefixSum[r] - prefixSum[l - 1]);
        x += (r - l + 1) * k;
        if (x % 2 == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
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