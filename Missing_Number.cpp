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
    n--;
    vector<ll int> a(n);
    for (int i = 0; i < (n); i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if (a[0] != 1)
    {
        cout << 1 << endl;
        return;
    }
    if (a[n - 1] != (n + 1))
    {
        cout << n + 1 << endl;
        return;
    }
    for (int i = 0; i < (n - 1); i++)
    {

        if ((a[i] + 1) != a[i + 1])
        {
            cout << (a[i] + 1);
            return;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}