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
    ll int l, r;
    cin >> l >> r;
    if (l == r)
    {
        cout << 1 << endl;
        return;
    }
    ll int diff = r - l;
    ll int fibsum = 0;
    ll int i = 1;
    while (fibsum <= diff)
    {
        fibsum += i;
        i++;
    }
    cout << i - 1 << endl;
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