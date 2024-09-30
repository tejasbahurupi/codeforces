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
    ll int n = s.length();
    ll int currcnt = 1;
    ll int maxcnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            currcnt++;
            if (currcnt > maxcnt)
            {
                maxcnt = currcnt;
            }
        }
        else
        {
            currcnt = 1;
        }
    }
    cout << maxcnt << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();

    return 0;
}