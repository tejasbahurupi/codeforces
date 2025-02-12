#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#define pb push_back
#define ll long long
using namespace std;
ll helper(vector<int> &arr)
{
    ll sum = 0, prefix_sum = 0;
    for (int num : arr)
    {
        prefix_sum += num;
        sum += prefix_sum;
    }
    sum += arr[arr.size() - 1];
    return sum;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pair<ll, vector<int>>> arr(n);
    for (int i = 0; i < n; i++)
    {
        vector<int> a(m);
        for (int j = 0; j < m; j++)
        {
            cin >> a[j];
        }
        ll score = helper(a);
        arr[i].first = score;
        arr[i].second = a;
    }
    sort(arr.rbegin(), arr.rend());
    ll ans = 0, cum_sum = 0;
    for (auto &[score, a] : arr)
    {
        for (int i = 0; i < a.size(); i++)
        {
            cum_sum += a[i];
            ans += cum_sum;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
