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
    ll int n, k;
    cin >> n >> k;
    ll int cnt = 0;
    ll int curr = 0;
    for (ll int i = 0; i < n; i++)
    {
        ll int x;
        cin >> x;
        if (x >= k)
        {
            curr += x;
        }
        else if (x == 0)
        {
            if (curr > 0)
            {
                curr--;
                cnt++;
            }
        }
    }
    cout << cnt << endl;
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