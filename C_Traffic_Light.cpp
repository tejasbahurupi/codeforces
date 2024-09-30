#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <string.h>
#include <math.h>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n;
    cin >> n;
    char c;
    cin >> c;
    string s;
    cin >> s;
    // vector<ll int> currc;
    // vector<ll int> currg;
    if (c == 'g')
    {
        cout << 0 << endl;
        return;
    }
    // for (ll int i = 0; i < n; i++)
    // {
    //     if (s[i] == c)
    //     {
    //         currc.pb(i);
    //     }
    //     else if (s[i] == 'g')
    //     {
    //         currg.pb(i);
    //     }
    // }
    // ll int ans = INT_MAX;
    // vector<ll int> x;
    // for (int i = 0; i < currc.size(); i++)
    // {
    //     ans = INT_MAX;
    //     for (int j = 0; j < currg.size(); j++)
    //     {
    //         if (currc[i] > currg[j])
    //         {
    //             ans = min(ans, n + currg[j] - currc[i]);
    //         }
    //         else
    //         {
    //             ans = min(ans, currg[j] - currc[i]);
    //         }
    //     }
    //     x.pb(ans);
    // }
    // ll int maxele = 0;
    // for (int i = 0; i < x.size(); i++)
    // {
    //     if (x[i] > maxele)
    //     {
    //         maxele = x[i];
    //     }
    // }
    // cout << maxele << endl;

    s += s;
    ll int currg = s.length() - 1;
    ll int ans = 0;
    for (ll int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == 'g')
        {
            currg = i;
        }
        else if (s[i] == c)
        {
            ans = max(ans, currg - i);
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