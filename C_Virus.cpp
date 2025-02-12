#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll int n, m;
    cin >> n >> m;
    vector<ll> ind(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> ind[i];
    }

    vector<ll> segments(m);
    sort(ind.begin(), ind.end());

    for (ll i = 1; i < m; i++)
    {
        segments[i - 1] = ind[i] - ind[i - 1] - 1;
    }
    segments[m - 1] = n + ind[0] - ind[m - 1] - 1;

    sort(segments.rbegin(), segments.rend());

    ll ans = 0;

    for (ll i = 0; i < m; ++i)
    {
        segments[i] -= (i * 4);
        segments[i] -= 1;
        if (segments[i] > 0)
            ans += segments[i];
        if (segments[i] == 0)
            ans += 1;

        if (segments[i] <= 0)
        {
            cout << n - ans << endl;
            return;
        }
    }
    cout << n - ans << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}