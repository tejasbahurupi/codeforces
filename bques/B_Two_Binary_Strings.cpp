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
    string a, b;
    cin >> a >> b;
    int n = a.size();
    bool ok = false;
    for (int i = 0; i + 1 < n; ++i)
    {
        if (a[i] == b[i] && a[i] == '0' && a[i + 1] == b[i + 1] && a[i + 1] == '1')
        {
            ok = true;
        }
    }

    if (ok)
        puts("YES");
    else
        puts("NO");

    // cout << "NO" << endl;
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