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
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    // map<int, int>::iterator i;
    for (auto const &x : mp)
    {
        if ((x.second & 1))
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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