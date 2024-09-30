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
    vector<ll int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll int ans = 0;
    ll int maxb = b[0];
    ll int suma = 0;
    for (int i = 0; i < n; i++)
    {

        suma += a[i];
        maxb = max(maxb, b[i]);
        ans = max(ans, suma + (k - i - 1) * maxb);
        if (i == (k - 1))
        {
            break;
        }
    }
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