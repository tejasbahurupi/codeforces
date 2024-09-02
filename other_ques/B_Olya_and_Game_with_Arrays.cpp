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
    vector<vector<ll int>> a(n);
    vector<pair<ll int, ll int>> mins(n);
    vector<int> m(n);
    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
        a[i].resize(m[i]); // Allocate memory for inner vector

        for (int j = 0; j < m[i]; j++)
        {
            cin >> a[i][j];
        }
        sort(a[i].begin(), a[i].end());
        mins[i].first = a[i][0];
        mins[i].second = a[i][1];
    }
    sort(mins.begin(), mins.end());
    ll int ans = mins[0].first;
    for (int i = 0; i < n; i++)
    {
        ans += mins[i].second;
    }
    sort(mins.begin(), mins.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         { return a.second < b.second; });
    cout << ans - mins[0].second << endl;
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