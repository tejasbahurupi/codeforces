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
    set<int> a;
    set<int> b;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (y == 0)
        {
            a.insert(x);
        }
        else
        {
            b.insert(x);
        }
    }
    if (a.size() == 0 || b.size() == 0)
    {
        cout << 0 << endl;
        return;
    }
    // cout << a.count(3) << endl;
    //  cout << b.count(2) << endl;
    ll int ans = 0;
    for (auto x : a)
    {
        if (b.count(x))
        {
            ans += b.size();
            ans += a.size();
            ans -= 2;
            // cout << ans << endl;
        }

        if (b.count(x + 1) == 1)
        {
            if (a.count(x + 2) == 1)
            {
                ans++;
                // cout << "tejas" << endl;
            }
        }
    }
    for (auto y : b)
    {
        if (a.count(y + 1))
        {
            if (b.count(y + 2))
            {
                ans++;
                // cout << "tejas" << endl;
            }
        }
    }

    cout << ans << endl;
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