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
    ll int ans = 0;
    int k = 0;
    map<char, int> mp;
    for (ll int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    set<char> set2;
    for (int j = 0; j < n; j++)
    {
        set2.insert(s[j]);
        mp[s[j]]--;
        if (mp[s[j]] == 0)
            mp.erase(s[j]);
        ans = max((ll)mp.size() + (ll)set2.size(), ans);
    }
    // ans = (ll int)mp.size() + (ll int)set2.size();
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