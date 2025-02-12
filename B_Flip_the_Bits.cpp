#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    ll int l = 0, r = 0;
    ll int cnta1 = 0, cntb1 = 0, cnta0 = 0, cntb0 = 0;
    while (true)
    {
        if (a[l] == r[l])
        {
            l++;
            r++;
        }
        else
        {
            if (a[l] == '1')
            {
                cnta1++;
            }
            else if (a[l] == '0')
            {
                cnta0++;
            }
            if (b[r] == '1')
            {
            }
            l++;
            r++;
        }
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