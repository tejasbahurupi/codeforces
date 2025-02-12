#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    if (n + m < 26)
    {
        cout << "Yes" << endl;
        return;
    }
    set<char> seta, setb;

    vector<ll int> chars(26);
    for (ll int i = 0; i < n; i++)
    {
        chars[a[i] - 'a']++;
    }
    for (ll int i = 0; i < m; i++)
    {
        chars[b[i] - 'a']++;
    }
    for (ll int i = 0; i < 26; i++)
    {
        if (chars[i] == 0)
        {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
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