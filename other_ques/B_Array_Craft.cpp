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
    int n, x, y;
    cin >> n >> x >> y;
    x--;
    y--;
    vector<int> a(n, 1);
    for (int i = 0; i < y; i++)
    {
        if (y & 1)
        {
            if (i & 1)
                a[i] = 1;
            else
                a[i] = -1;
        }
        else
        {
            if (i & 1)
                a[i] = -1;
            else
                a[i] = 1;
        }
    }
    for (int i = x + 1; i < n; i++)
    {
        if ((x + 1) & 1)
        {
            if (i % 2 == 0)
                a[i] = 1;
            else
                a[i] = -1;
        }
        else
        {
            if (i % 2 == 0)
                a[i] = -1;
            else
                a[i] = 1;
        }
    }
    for (auto i : a)
    {
        cout << i << " ";
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