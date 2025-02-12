#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n;
    cin >> n;
    vector<ll int> a(n + 1);
    ll int sum = 0;
    for (ll int i = 0; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.begin() + n);
    ll int curr = 2 * a[n];
    ll int maxe = 0;
    for (ll int i = 0; i < n; i++)
    {
        if (a[i] > a[n] && a[i] <= curr)
        {
            swap(a[i], a[n]);
            curr = 2 * a[n];
        }
    }
    for (ll int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << sum << endl;
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