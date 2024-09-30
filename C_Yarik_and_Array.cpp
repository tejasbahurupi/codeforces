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
    vector<ll int> a(n);
    cin >> a[0];
    ll int maxsum = a[0];
    ll int currsum = a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i] + a[i - 1] & 1)
        {
            currsum += a[i];
        }
        else
        {
            currsum = a[i];
        }
        if (currsum < a[i])
        {
            currsum = a[i];
        }
        maxsum = max(currsum, maxsum);
    }
    cout << maxsum << endl;
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