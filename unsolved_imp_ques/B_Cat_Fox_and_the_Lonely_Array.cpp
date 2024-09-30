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
    int l = 1, r = n - 2;
    int orl = a[0];
    int orr = a[n - 1];
    int currk = 0;
    while (l <= (n - 1) && r >= 0)
    {
        if (orl == orr)
        {
            currk++;
            for (int i = 0; i < (n - currk); i++)
            {
                int curr = 0;
                for (int i = j; i < j + currk; j++)
                {
                    curr |= a[j];
                }
                if (curr != currk)
                {
                    break;
                }
            }
        }
        else
        {
            orl |= a[left++];
            or2 |= a[right--];
        }
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