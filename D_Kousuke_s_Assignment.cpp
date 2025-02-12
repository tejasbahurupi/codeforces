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
    for (ll int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    unordered_map<ll int, ll int> psi;
    ll int prefixSum = 0;
    psi[0] = -1;
    ll int l = -1;
    ll int ans = 0;

    for (int i = 0; i < n; i++)
    {
        prefixSum += a[i];

        if (psi.count(prefixSum) && psi[prefixSum] >= l)
        {
            ans++;
            l = i;
        }
        psi[prefixSum] = i;
    }

    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}