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
    vector<pair<ll int, ll int>> a(n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x;
        a[i].first = x;
        a[i].second = i;
    }
    sort(a.begin(), a.end());

    vector<ll int> prefix_sum(n);
    prefix_sum[0] = a[0].first;

    vector<ll int> ans(n, 0);
    ll int j = 0;
    ll int score = 0;
    for (ll int i = 0; i < n; i++)
    {
        score += a[i].first;
        ll int temp = score;
        j = max(j, i + 1);
        while (j < n && temp >= a[j].first)
        {
            temp += a[j].first;
            j++;
        }
        ans[a[i].second] = j - 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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
