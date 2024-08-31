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

// int gcd(int a, int b)
// {
//     while (b != 0)
//     {
//         int tmp = a % b;
//         a = b;
//         b = tmp;
//     }
//     return a;
// }
int lcm(int a, int b)
{
    return a * b / __gcd(a, b);
}

void solve()
{
    int n;
    cin >> n;
    vector<int> k(n);
    ll int min = 1;
    vector<ll int> factors;
    for (int i = 0; i < n; i++)
    {
        cin >> k[i];
        min = lcm(min, k[i]);
    }
    // cout << min << endl;
    vector<ll int> coins(n);
    ll int coinssum = 0;
    for (int i = 0; i < n; i++)
    {
        coins[i] = min / k[i];
        coinssum += coins[i];
    }
    // cout << coinssum << endl;
    if (coinssum < min)
    {
        for (int i = 0; i < n; i++)
        {
            cout << coins[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
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