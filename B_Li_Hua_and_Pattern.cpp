#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n, k;
    cin >> n >> k;
    vector<vector<ll int>> a(n, vector<ll int>(n));
    ll int cnt = 0;
    for (ll int i = 0; i < n; i++)
    {
        for (ll int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (ll int i = 0; i < n / 2; i++)
    {
        for (ll int j = 0; j < n; j++)
        {
            if (a[i][j] != a[n - i - 1][n - j - 1])
            {
                cnt++;
            }
        }
    }
    if (n == 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (n & 1)
    {
        for (ll int i = 0; i < n / 2; i++)
        {
            if (a[(n / 2)][i] != a[(n / 2)][n - i - 1])
            {
                cnt++;
            }
        }
    }
    // cout << cnt << endl;

    // if (k >= cnt && (k - cnt) % 2 == 0)
    // {
    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }
    if (cnt > k)
    {
        cout << "NO" << endl;
    }
    else
    {
        if (n & 1)
        {
            cout << "YES" << endl;
            return;
        }
        k -= cnt;
        if (n & 1)
            cout << "YES" << endl;
        else if (k & 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
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