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
    int n, k;
    cin >> n >> k;
    if (k == 0)
    {
        cout << 0 << endl;
        return;
    }
    int cnt = 0;
    if (k >= n)
    {
        k -= n;
        cnt++;
        n--;
    }
    while (k > 0 && n > 0)
    {
        if (k >= n)
        {
            k -= n;
            cnt++;
            if (k >= n)
            {
                k -= n;
                cnt++;
            }
        }
        n--;
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