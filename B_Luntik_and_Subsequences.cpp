#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    ll int n;
    cin >> n;
    vector<ll int> a(n);
    ll int cnt0 = 0, cnt1 = 0;
    for (ll int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            cnt0++;
        }
        else if (a[i] == 1)
        {
            cnt1++;
        }
    }
    if (cnt1 == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << (((ll)1 << cnt0) * cnt1) << endl;
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