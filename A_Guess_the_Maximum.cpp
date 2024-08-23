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
    vector<int> a(n);
    vector<int> maxes;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        maxes.pb(max(a[i], a[i + 1]));
    }
    sort(maxes.begin(), maxes.end());
    cout << maxes[0] - 1 << endl;
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