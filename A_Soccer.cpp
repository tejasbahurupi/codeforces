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
    ll int x1, y1;
    cin >> x1 >> y1;
    ll int x2, y2;
    cin >> x2 >> y2;
    if (x1 == x2 && y1 == y2)
    {
        cout << "YES" << endl;
        return;
    }
    if ((x2 > y2 && x1 > y1) || (x1 < y1 && y2 > x2))
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