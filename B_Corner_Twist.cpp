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
    vector<string> a(n);
    vector<string> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        int sr1 = 0;
        int sr2 = 0;
        for (int j = 0; j < m; j++)
        {
            sr1 += (int)(a[i][j] - '0');
            sr2 += (int)(b[i][j] - '0');
        }
        if (sr1 % 3 != sr2 % 3)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "NO" << endl;
        return;
    }
    for (int i = 0; i < m; i++)
    {
        int sc1 = 0;
        int sc2 = 0;
        for (int j = 0; j < n; j++)
        {
            sc1 += (int)(a[j][i] - '0');
            sc2 += (b[j][i] - '0');
        }
        if (sc1 % 3 != sc2 % 3)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "NO" << endl;
        return;
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
    {
        solve();
    }
    return 0;
}