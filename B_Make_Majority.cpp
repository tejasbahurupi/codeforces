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
    cin >> n;
    string s;
    cin >> s;
    char initchar = s[0];
    string ans = "";
    int cnt0 = 0, cnt1 = 0;

    // if (s[0] == '0')
    // {
    //     ans += '0';
    //     cnt0++;
    // }
    ans += s[0];
    if (s[0] == '0')
    {
        cnt0++;
    }
    else
    {
        cnt1++;
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i] == '1')
        {
            ans += '1';
            cnt1++;
        }
        else if (ans[ans.length() - 1] == '1')
        {
            ans += '0';
            cnt0++;
        }
    }
    // cout << ans << endl;
    if (cnt1 > cnt0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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