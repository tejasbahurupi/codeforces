#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <string.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, L, R;
        cin >> l >> r >> L >> R;
        if (r < L || R < l)
        {
            cout << 1 << endl;
            // cout << "tejas" << endl;
            continue;
        }
        else if (l == L && r == R)
        {
            cout << R - L << endl;
            // cout << 1 << endl;
            continue;
        }
        else if (L > l && r > R)
        {
            cout << R - L + 2 << endl;
            // cout << 2 << endl;
            continue;
        }
        else if (l > L && R > r)
        {
            cout << r - l + 2 << endl;
            // cout << 3 << endl;
            continue;
        }
        else if (l == L || r == R)
        {
            cout << min(R, r) - max(l, L) + 1 << endl;
            // cout << 4 << endl;
            continue;
        }
        else
        {
            cout << min(r, R) - max(l, L) + 2 << endl;
        }
    }

    return 0;
}