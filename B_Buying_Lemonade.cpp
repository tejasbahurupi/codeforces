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
    // map<ll int, ll int> mp;
    for (ll int i = 0; i < n; i++)
    {
        cin >> a[i];
        // mp[a[i]]++;
    }
    sort(a.begin(), a.end());
    ll int cnt = 0;
    if (k <= n * a[0])
    {
        cout << k << endl;
        return;
    }
    ll int minele = a[0];
    ll int turns = 0;
    ll int j = 0;
    while (cnt < k)
    {
        ll int m = 0;
        for (ll int i = 0; i < a.size(); i++)
        {
            if (a[i] > 0)
            {
                if (a[i] == minele)
                {
                    m++;
                }
                a[i] -= minele;
                cnt += minele;
                // cout << minele << endl;

                if (cnt > k)
                {
                    cnt -= minele;

                    cout << turns + (k - cnt) + j << endl;
                    return;
                }
                turns += minele;
                if (cnt == k)
                {
                    cout << turns + j << endl;
                    return;
                }
            }
            else
            {
                minele = a[i + 1];
            }
        }
        j += m;
    }
    cout << turns + j << endl;
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