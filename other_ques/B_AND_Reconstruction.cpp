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
    int n;
    cin >> n;
    vector<ll int> a(n);
    vector<ll int> b(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> b[i];
    }

    a[0] = b[0];

    for (int i = 1; i < n - 1; ++i)
    {
        a[i] = b[i];
        if (b[i] < b[i - 1])
        {
            a[i] = b[i - 1];
        }
    }
    a[n - 1] = b[n - 2];

    // Output the result
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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