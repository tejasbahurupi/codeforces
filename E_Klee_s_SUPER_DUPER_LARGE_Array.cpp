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
    float x = 2 * k + n - 1;
    // ll int sum = x / 2 * (float)n;

    // cout << " " << sum << endl;
    // ll int min = sum;
    // ll int curr = sum;
    // for (ll int i = k + n - 1; i >= k; i--)
    // {
    //     curr = curr - 2 * i;
    //     if (abs(curr) < min)
    //     {
    //         // cout << " " << curr << endl;
    //         min = abs(curr);
    //     }
    //     // else
    //     // {
    //     //     break;
    //     // }
    //}
    // cout << min << endl;
    // if (n & 1)
    //{
    ll int sum = (float)(n / 2) * (float)(2 * k + n - 1);
    cout << sum << endl;
    //}
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