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
    ll int n;
    cin >> n;
    vector<ll int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll int min = 1;
    ll int max = n;
    ll int l = 0, r = n - 1;
    while (l < r)
    {
        if (a[l] == min)
        {
            min++;
            l++;
        }
        else if (a[l] == max)
        {
            max--;
            l++;
        }
        else if (a[r] == min)
        {
            min++;
            r--;
        }
        else if (a[r] == max)
        {
            max--;
            r--;
        }
        else
        {
            cout << l + 1 << " " << r + 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
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