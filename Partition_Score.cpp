#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n, k;
    cin >> n >> k;
    vector<ll int> a(n);
    for (ll int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if (k == 1)
    {
        cout << a[n - 1] * 2 + a[n - 2] + a[0] << endl;
        return;
    }

    cout << a[n - 1] + a[n - 2] + a[0] + a[n - k - 1] << endl;
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
