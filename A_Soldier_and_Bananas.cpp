#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int k, n, w;
    cin >> k >> n >> w;
    ll int i = 1, curr = 0;
    while (i <= w)
    {
        curr += (i * k);
        i++;
    }
    cout << max(curr - n, 0ll) << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    //}
    return 0;
}