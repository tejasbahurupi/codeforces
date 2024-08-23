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
    int n;
    ll int ans = 0;
    cin >> n;
    string a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << n << endl;
        return;
    }

    int xora = a[0];
    int xorb = b[0];
    string s;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
        s += b[i];
    }
    // cout << "tejas" << endl;
    // cout << s << endl;
    ll int i = 0;
    while (i < 2 * s.length())
    {
        if (s[i] == '0' && (s[i] ^ s[i + 2]) == 1 && s[i + 3] == '1')
        {
            ans += 2;
            s.erase(i, 4);
            i -= 2;
        }
        i += 2;
    }
    cout << s << endl;

    // while (i < 2 * n)
    // {
    //     if ((s[i] ^ s[i + 1]) == 1)
    //     {
    //         ans += 2;
    //         s.erase(i, 2);
    //         i -= 2;
    //     }
    //     i += 2;
    // }
    // cout << s << endl;

    int x = s.length();
    if (x == 2)
    {
        if (s[i] == '0')
            ans++;
        // cout << ans << endl;
        return;
    }
    // i = 0;
    // while (i < 2 * s.length())
    // {
    //     if ((s[i] ^ s[i + 2]) == 1)
    //     {
    //         ans += 2;
    //         s.erase(i, 4);
    //         i -= 2;
    //     }
    //     i += 2;
    // }
    // cout << s << endl;

    for (int i = 0; i < s.length(); i += 2)
    {
        if (s[i] == '0')
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