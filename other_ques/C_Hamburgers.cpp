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
    string receipe;
    cin >> receipe;
    int nb, nc, ns;
    cin >> nb >> ns >> nc;
    int pb, pc, ps;
    cin >> pb >> ps >> pc;
    ll int r, ans = 0;
    cin >> r;
    int rb = 0, rc = 0, rs = 0;
    for (int i = receipe.length() - 1; i >= 0; i--)
    {
        if (receipe[i] == 'B' || receipe[i] == 'b')
            rb++;
        else if (receipe[i] == 'C' || receipe[i] == 'c')
            rc++;
        else
            rs++;
    }
    // cout << rb << " " << rc << " " << rs << endl;
    ll int left = 0, right = 1e13, mid;
    while (left <= right)
    {
        mid = (right + left) / 2;

        ll int nb_ = rb * (mid)-nb;
        ll int nc_ = rc * (mid)-nc;
        ll int ns_ = rs * (mid)-ns;

        if (nb_ < 0)
            nb_ = 0;
        if (nc_ < 0)
            nc_ = 0;
        if (ns_ < 0)
            ns_ = 0;
        // cout << pb << " " << pc << " " << ps << endl;
        ll int z = 0;
        z = (nb_ * pb) + (nc_ * pc) + (ns_ * ps);
        // cout << z << endl;
        // cout << mid << endl;
        if (z == r)
        {
            ans = mid;
            break;
        }
        if (z < r)
        {
            ans = mid;
            left = mid + 1;
        }

        else
        {
            right = mid - 1;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}