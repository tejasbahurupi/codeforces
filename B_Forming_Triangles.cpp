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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = 0; i < n - 2; i++)
    {
        if (pow(2.0, a[i]) + pow(2.0, a[i + 1]) > pow(2.0, a[i + 2]))
        {
            ans++;
        }
        // else if (pow(2, a[i]) + pow(2, a[i + 2]) > pow(2, a[i + 3]))
        // {
        //     ans++;
        // }
    }
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