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
    string s;
    cin >> s;
    ll int ans = 0;
    if (n % 2 == 0)
    {
        map<char, int> mpeven;
        map<char, int> mpodd;
        for (int i = 0; i < n; i++)
        {
            if (i & 1)
            {
                mpodd[s[i]]++;
            }
            else
            {
                mpeven[s[i]]++;
            }
        }
        int maxFreq = 0;
        char maxElem = mpeven[0];

        for (auto &pair : mpeven)
        {
            if (pair.second > maxFreq)
            {
                maxFreq = pair.second;
                maxElem = pair.first;
            }
        }
        // cout << maxElem << endl;
        for (int i = 0; i < n; i += 2)
        {
            if (s[i] != maxElem)
            {
                ans++;
            }
        }
        maxElem = mpodd[0];
        maxFreq = 0;
        for (auto &pair : mpodd)
        {
            if (pair.second > maxFreq)
            {
                maxFreq = pair.second;
                maxElem = pair.first;
            }
        }
        // cout << maxElem << endl;
        for (int i = 1; i < n; i += 2)
        {
            if (s[i] != maxElem)
            {
                ans++;
            }
        }
    }
    else
    {
        vector<int> pref[2] = {vector<int>(26, 0), vector<int>(26, 0)};
        vector<int> suff[2] = {vector<int>(26, 0), vector<int>(26, 0)};
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