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

bool isPerfectSquare(long long x)
{
    if (x >= 0)
    {

        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
void solve()
{
    ll int n;
    cin >> n;
    string s;
    cin >> s;
    if (!isPerfectSquare(n))
    {
        cout << "No" << endl;
        return;
    }
    long long x = sqrt(n);
    for (int i = 0; i < x; i++)
    {
        if (s[i] != '1' || s[n - i - 1] != '1')
        {
            cout << "No" << endl;
            return;
        }
    }
    for (int i = x; i < n - x - 1; i++)
    {
        if ((i % x == 0) || (i % x == (x - 1)))
        {
            if (s[i] != '1')
            {
                cout << "No" << endl;
                return;
            }
        }
        else
        {
            if (s[i] != '0')
            {
                cout << "No" << endl;
                return;
            }
        }
    }
    cout << "Yes" << endl;
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