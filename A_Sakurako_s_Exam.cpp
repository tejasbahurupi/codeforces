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
    int a, b;
    cin >> a >> b;
    if (a == 0 || b == 0)
    {
        if (max(a, b) % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
        return;
    }
    b = b % 2;
    a = a - 2 * b;
    if (a >= 0 && a % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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