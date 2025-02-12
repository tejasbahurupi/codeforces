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
    for (ll int i = (n - 1) / 2; i >= 0; i--)
    {
        ll int curra = 0;
        if (a[i] == a[i + 1])
        {
            curra++;
        }

        if (a[n - i - 1] == a[n - i - 2])
        {
            curra++;
        }

        if (curra > 0)
        {
            ll int currb = 0;
            swap(a[i], a[n - i - 1]);
            if (a[i] == a[i + 1])
            {
                currb++;
            }
            if (a[n - i - 1] == a[n - i - 2])
            {
                currb++;
            }
            if (curra < currb)
            {
                swap(a[i], a[n - i - 1]);
            }
        }
    }
    ll int ans = 0;
    for (ll int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            ans++;
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