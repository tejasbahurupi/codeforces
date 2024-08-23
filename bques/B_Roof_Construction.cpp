#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <bitset>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int k = 0;
    while ((1LL << (k + 1)) <= n - 1)
    {
        ++k;
    }
    /// cout << (1LL << 10) << endl;
    int x = (1LL << k);
    for (int i = n - 1; i >= x; i--)
        cout << i << " ";
    for (int i = 0; i < x; i++)
        cout << i << " ";

    cout << endl;
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
    {
        solve();
    }
    return 0;
}