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
    ll int n, k;
    cin >> n >> k;
    vector<ll int> a(n);
    ll int max_no = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        max_no = max(max_no, a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (max_no - a[i] < k)
        {
            continue;
        }
        else if (((max_no - a[i]) / k) & 1)
        {
            a[i] = a[i] + (((max_no - a[i]) / k) + 1) * k;
        }
        else
        {
            a[i] = a[i] + (((max_no - a[i]) / k) * k);
        }
    }
    int ans = max_no;
    long long int min_no = 1000000007;
    max_no = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min_no)
        {
            min_no = a[i];
        }
        if (a[i] > max_no)
        {
            max_no = a[i];
        }
    }
    // cout << max_no << " " << min_no << endl;
    if (max_no - min_no < k)
    {
        cout << max_no << endl;
        return;
    }
    else
    {
        cout << -1 << endl;
        return;
    }
    cout << -1 << endl;
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