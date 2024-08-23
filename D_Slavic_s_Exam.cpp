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
    string s, t;
    cin >> s >> t;
    int cnt = 0;
    string ans = "";
    int i = 0, j = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '?')
        {
            if (j < t.length())
                s[i] = t[j++];
            else
                s[i] = 'a';
        }
        else if (s[i] == t[j])
            j++;
    }
    if (j >= t.length())
        cout << "YES\n"
             << s << endl;
    else
        cout << "NO" << endl;
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