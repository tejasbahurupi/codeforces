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
using namespśace std;

void solve()
{
    ll int n;
    cin >> n;
    int l = 1, r = n;
    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
        {
            cout << l << " ";
            l++;
        }
        else
        {
            cout << r << " ";
            r--;
        }
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