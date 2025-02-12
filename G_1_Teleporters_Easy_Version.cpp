#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n, c;
    cin >> n >> c;
    vector<ll int> a(n);
    for (ll int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] += i + 1;
    }
    sort(a.begin(), a.end());
    ll int cnt = 0;
    for (ll int i = 0; i < n; i++)
    {
        if (c >= a[i])
        {
            c -= a[i];
            cnt++;
        }
        else
        {
            break;
        }
    }
    cout << cnt << endl;
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