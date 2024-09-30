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
    ll int n, m, q;
    cin >> n >> m >> q;
    vector<ll int> b(m);
    for (ll int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    vector<ll int> a(q);
    for (ll int i = 0; i < q; i++)
    {
        cin >> a[i];
    }
    sort(b.begin(), b.end());

    for (ll int i = 0; i < q; i++)
    {
        if (a[i] < b[0])
        {
            cout << b[0] - 1 << endl;
        }
        else if (a[i] > b[m - 1])
        {
            cout << n - b[m - 1] << endl;
        }
        else
        {
            // auto it = lower_bound(b.begin(), b.end(), a[i]);
            // cout << (*it - *(it - 1)) / 2 << endl;
            for (ll int j = 0; j < m - 1; j++)
            {
                if (a[i] > b[j] && a[i] < b[j + 1])
                {
                    cout << (b[j + 1] - b[j]) / 2 << endl;
                    break;
                }
            }
        }
    }
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
