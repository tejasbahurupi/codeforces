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
    ll int n, l;
    cin >> n >> l;
    vector<ll int> a(n);
    for (ll int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    double radius = a[0];
    for (ll int i = 1; i < n; i++)
    {
        if ((((double)a[i] - (double)a[i - 1]) / (double)2) > radius)
        {
            radius = (a[i] - a[i - 1]) / (double)2;
        }
    }
    radius = max(radius, (double)l - (double)a[n - 1]);
    // maxdist = maxdist / 2;
    cout << fixed << setprecision(10) << radius << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    //}
    return 0;
}