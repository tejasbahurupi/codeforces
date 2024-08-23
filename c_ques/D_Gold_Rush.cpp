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
    ll int n, m;
    cin >> n >> m;
    if (n == m)
    {
        cout << "YES" << endl;
        return;
    }
    if (n < m)
    {
        cout << "NO" << endl;
        return;
    }
    set<ll int> myset;
    while (n != 0 && n % 3 == 0)
    {
        myset.insert(n / 3);
        myset.insert(2 * n / 3);
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