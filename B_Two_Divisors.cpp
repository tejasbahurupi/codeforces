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
#define mod 1000000007

void solve()
{
    ll int a, b;

    cin >> a >> b;

    if (b % a == 0)
    {
        cout << b * b / a << endl;
    }
    else
    {
        cout << b * a / (gcd(a, b)) << endl;
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
