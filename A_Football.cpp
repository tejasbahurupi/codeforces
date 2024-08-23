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
    map<string, int> mp;
    string s;
    int max = 0;
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        mp[s]++;
        if (mp[s] > max)
        {
            max = mp[s];
            ans = s;
        }
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}