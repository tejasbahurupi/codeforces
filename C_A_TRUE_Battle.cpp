#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n;
    cin >> n;
    string s;
    cin >> s;
    ll int cnt = 0;
    if (s[0] == '1' || s[n - 1] == '1')
    {
        cout << "YES" << endl;
        return;
    }
    for (ll int i = 1; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (s[i - 1] == '1')
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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