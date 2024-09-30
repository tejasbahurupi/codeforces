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
    string s;
    cin >> s;
    ll cnt0 = 0, cnt1 = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
            cnt0++;
        else
            cnt1++;
    }
    if (cnt1 == cnt0)
    {
        cout << 0 << endl;
        return;
    }
    int x = -1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            if (cnt1 > 0)
            {
                cnt1--;
            }
            else
            {
                x = i;
                break;
            }
        }
        else
        {
            if (cnt0 > 0)
            {
                cnt0--;
            }
            else
            {
                x = i;
                break;
            }
        }
    }
    if (x == -1)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << s.length() - x << endl;
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
