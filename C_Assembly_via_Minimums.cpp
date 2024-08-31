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
    int m = n * (n - 1) / 2;
    vector<ll int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    for (int i = 0; i < m; i += (--n))
    {
        cout << b[i] << " ";
    }
    cout << 1000000000 << endl;
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