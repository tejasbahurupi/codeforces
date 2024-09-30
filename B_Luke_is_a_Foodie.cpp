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
    cin >> a[0];
    ll int maxe = a[0];
    ll int mine = a[0];
    ll int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > maxe)
        {
            maxe = a[i];
        }
        if (a[i] < mine)
        {
            mine = a[i];
        }
        if (maxe - mine > 2 * k)
        {
            cnt++;
            maxe = mine = a[i];
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