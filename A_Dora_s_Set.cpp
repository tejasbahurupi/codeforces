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
    int l, r;
    cin >> l >> r;
    int evens;
    int odds;
    if (l & 1 && r & 1)
    {
        odds = (r - l) / 2 + 1;
        evens = odds - 1;
    }
    else if (l % 2 == 0 && r % 2 == 0)
    {
        evens = (r - l) / 2 + 1;
        odds = evens - 1;
    }
    else
    {
        evens = (r - l) / 2 + 1;
        odds = evens;
    }
    int ans = 0;
    ans = odds / 2;
    cout << ans << endl;
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