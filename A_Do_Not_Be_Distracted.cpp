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
    set<char> set;
    set.insert(s[0]);
    for (ll int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
        {
            if (set.find(s[i]) != set.end())
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                set.insert(s[i]);
            }
        }
    }
    cout << "YES" << endl;
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