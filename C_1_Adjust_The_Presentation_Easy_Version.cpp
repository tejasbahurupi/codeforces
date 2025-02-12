#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n, m, q;
    cin >> n >> m >> q;
    vector<ll int> a(n);
    vector<ll int> s(m);

    for (ll int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll int i = 0; i < m; i++)
    {
        cin >> s[i];
    }

    set<ll int> myset;
    ll int j = 0;
    ll int i = 0;

    if (a[0] != s[0])
    {
        cout << "TIDAK" << endl;
        return;
    }

    while (j < m)
    {
        if (i < n && a[i] == s[j])
        {
            j++;
            myset.insert(a[i]);
            i++;
        }
        else if (myset.find(s[j]) != myset.end())
        {
            j++;
        }
        else
        {
            cout << "TIDAK" << endl;
            return;
        }
    }
    cout << "YA" << endl;
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