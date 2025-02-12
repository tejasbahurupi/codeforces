#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    k /= 2;

    if (n == 2 * k)
    {
        for (int i = 1; i < n; i += 2)
        {
            if (a[i] != (i + 1) / 2)
            {
                cout << (i + 1) / 2 << endl;
                return;
            }
        }
        cout << k + 1 << endl;
        return;
    }

    for (int i = 1; i <= n - 2 * k + 1; i++)
    {
        if (a[i] != 1)
        {
            cout << 1 << endl;
            return;
        }
    }
    cout << 2 << endl;
    return;
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