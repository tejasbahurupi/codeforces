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
    int n, p;
    cin >> n >> p;
    vector<ll int> a(n), b(n);
    for (ll int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i] > p)
        {
            b[i] = p;
        }
    }
    vector<pair<ll int, ll int>> pairs;
    for (ll int i = 0; i < n; i++)
    {
        pairs.pb({b[i], a[i]});
    }
    sort(pairs.begin(), pairs.end(), [](pair<ll int, ll int> a, pair<ll int, ll int> b)
         {
    if (a.first == b.first) {
        return a.second > b.second;  // Compare second elements in descending order
    } else {
        return a.first < b.first;    // Compare first elements in ascending order
    } });

    // for (auto x : pairs)
    // {
    //     cout << x.first << " ";
    // }
    // cout << endl;
    // for (auto x : pairs)
    // {
    //     cout << x.second << " ";
    // }
    // cout << endl;
    ll int cnt = 0;
    ll int j = 0;
    cnt += p;
    n--;
    while (n > 0)
    {

        if (pairs[j].second <= n)
        {
            cnt += pairs[j].second * pairs[j].first;
            n -= pairs[j].second;
            j++;
        }
        else
        {
            cnt += n * pairs[j].first;
            break;
        }
    }
    cout << cnt << endl;
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