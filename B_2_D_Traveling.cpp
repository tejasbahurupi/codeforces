#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<ll int> x(n), y(n);
    vector<pair<ll int, ll int>> cities(n);
    for (ll int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    a--;
    b--;
    uint64_t ans = llabs(y[b] - y[a]) + llabs(x[a] - x[b]);
    uint64_t mina = LLONG_MAX;
    uint64_t minb = LLONG_MAX;
    for (ll int i = 0; i < k; i++)
    {
        mina = min(mina, (uint64_t)llabs(y[i] - y[a]) + llabs(x[i] - x[a]));
        minb = min(minb, (uint64_t)llabs(y[i] - y[b]) + llabs(x[i] - x[b]));
    }
    cout << min(ans, mina + minb) << endl;
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
