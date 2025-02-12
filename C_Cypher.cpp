#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n;
    cin >> n;
    vector<ll int> a(n);
    for (ll int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll int i = 0; i < n; i++)
    {
        ll int m;
        cin >> m;
        for (ll int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            if (c == 'U')
            {
                a[i]--;
                if (a[i] == -1)
                {
                    a[i] = 9;
                }
            }
            else
            {
                a[i]++;
                if (a[i] == 10)
                {
                    a[i] = 0;
                }
            }
        }
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