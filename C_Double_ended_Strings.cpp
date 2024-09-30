#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    string a;
    string b;
    cin >> a >> b;
    set<string> sa;
    set<string> sb;
    for (ll int i = 0; i < a.size(); i++)
    {
        sa.insert(a.substr(i, 1));
    }
    for (ll int i = 0; i < b.size(); i++)
    {
        sb.insert(b.substr(i, 1));
    }

    for (ll int i = 0; i < a.size(); i++)
    {
        for (ll int j = i + 1; j < a.size(); j++)
        {
            sa.insert(a.substr(i, j - i + 1));
        }
    }
    for (ll int i = 0; i < b.size(); i++)
    {
        for (ll int j = i + 1; j < b.size(); j++)
        {
            sb.insert(b.substr(i, j - i + 1));
        }
    }
    // for (auto x : sa)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
    // for (auto x : sb)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
    ll int ans = 0;
    for (auto x : sa)
    {
        if (sb.count(x))
        {
            ans = max(ans, (ll)x.length());
        }
    }
    // for (auto x : ans)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
    // sort(ans.begin(), ans.end());
    // for (auto x : ans)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
    cout << a.length() + b.length() - 2 * ans << endl;
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