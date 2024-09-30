#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int w, h;
    cin >> w >> h;
    ll int k;
    cin >> k;
    vector<ll int> hor0(k);
    for (ll int i = 0; i < k; i++)
    {
        cin >> hor0[i];
    }
    ll int ans = (hor0[k - 1] - hor0[0]) * h;
    cin >> k;
    vector<ll int> horw(k);
    for (ll int i = 0; i < k; i++)
    {
        cin >> horw[i];
    }
    ans = max(ans, (horw[k - 1] - horw[0]) * h);
    cin >> k;
    vector<ll int> ver0(k);
    for (ll int i = 0; i < k; i++)
    {
        cin >> ver0[i];
    }
    ans = max(ans, (ver0[k - 1] - ver0[0]) * w);
    cin >> k;
    vector<ll int> verh(k);
    for (ll int i = 0; i < k; i++)
    {
        cin >> verh[i];
    }
    ans = max(ans, (verh[k - 1] - verh[0]) * w);
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