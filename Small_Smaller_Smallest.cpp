#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n;
    cin >> n;
    string s;
    cin >> s;
    ll int cnt1 = 0, cnt0 = 0;
    for (ll int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            cnt0++;
        }
        else
        {
            cnt1++;
        }
        if (cnt1 > 0)
        {
            cnt0 = 0;
        }
    }
    if (cnt0 > 0)
    {
        cout << n << endl;
        return;
    }
    if (cnt1 & 1)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
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