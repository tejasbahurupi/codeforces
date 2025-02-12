#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    // m = *max_element(b.begin(), b.end());
    m = b[0];
    // if (n == 1)
    // {
    //     cout << "YES" << endl;
    //     return;
    // }
    // if (n == 2 && a[0] > a[1])
    // {
    //     if (m - a[0] > a[1])
    //     {
    //         cout << "NO" << endl;
    //         return;
    //     }
    // }

    a[0] = min(m - a[0], a[0]);
    for (int i = 1; i < n; i++)
    {
        int temp = min(m - a[i], a[i]);
        int other = max(m - a[i], a[i]);
        if (temp >= a[i - 1])
        {
            a[i] = temp;
        }
        else if (other >= a[i - 1])
        {
            a[i] = other;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}