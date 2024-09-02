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
    int n, m;
    cin >> n >> m;
    vector<ll int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max_ele = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max_ele)
        {
            max_ele = a[i];
        }
    }
    char c;
    int l, r;
    for (int i = 0; i < m; i++)
    {
        cin >> c >> l >> r;
        if (c == '+')
        {
            if (max_ele >= l && max_ele <= r)
            {
                max_ele++;
            }
        }
        else
        {

            if (max_ele >= l && max_ele <= r)
            {
                max_ele--;
            }
        }

        cout << max_ele << " ";
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