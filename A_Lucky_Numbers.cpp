#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int l, r;
    cin >> l >> r;
    ll int ans = l;
    ll int m = 0;
    ll int maxm = 0;

    for (ll int i = l; i <= r; i++)
    {
        string num = to_string(i);
        ll int min_digit = 9, max_digit = 0;

        for (char digit : num)
        {
            ll int d = digit - '0';
            min_digit = min(min_digit, d);
            max_digit = max(max_digit, d);
        }

        ll int curr = max_digit - min_digit;
        if (curr > maxm)
        {
            maxm = curr;
            ans = i;
        }

        if (maxm == 9)
        {
            break;
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