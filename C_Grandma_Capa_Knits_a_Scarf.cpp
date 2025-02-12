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
    ll int cnt = __LONG_LONG_MAX__;
    for (ll int i = 0; i < 26; i++)
    {
        char c = 'a' + i;
        ll int l = 0;
        ll int r = n - 1;
        ll int curr = 0;
        while (l <= r)
        {
            if (s[l] == s[r])
            {
                l++;
                r--;
            }
            else if (s[l] == c)
            {
                l++;
                curr++;
            }
            else if (s[r] == c)
            {
                r--;
                curr++;
            }
            else
            {
                curr = __LONG_LONG_MAX__;
                break;
            }

            // if (curr =)
            // {
            //     cout << -1 << endl;
            //     return;
            // }
        }
        if (curr == 0)
        {
            cout << 0 << endl;
            return;
        }
        if (curr != __LONG_LONG_MAX__)
            cnt = min(cnt, curr);
    }
    if (cnt == __LONG_LONG_MAX__)
    {
        cout << -1 << endl;
        return;
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