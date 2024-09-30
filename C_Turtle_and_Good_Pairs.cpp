
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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    vector<ll int> alpha(27);
    for (ll i = 0; i < n; i++)
    {
        ll x = (int)(s[i]) - 96;
        alpha[x]++;
    }
    while (n > 0)
    {
        for (ll i = 1; i <= 26; i++)
        {
            if (alpha[i] > 0)
            {
                ans += (char)(i + 96);
                alpha[i]--;
                n--;
            }
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