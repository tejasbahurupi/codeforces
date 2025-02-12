#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;
    ll int n = min(a.size(), b.size());
    ll int cnt = 0;
    for (ll int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            cnt++;
        }
        else
        {
            break;
                }
    }
    if (cnt > 0)
        cout << cnt + 1 + (a.size() - cnt) + (b.size() - cnt) << endl;
    else
        cout << a.size() + b.size() << endl;
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