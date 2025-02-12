#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<string> a(n);
    set<string> set;

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        set.insert(a[i]);
    }

    for (ll i = 0; i < n; i++)
    {
        bool flag = false;
        string y = a[i];

        for (ll j = 1; j < y.length(); j++)
        {
            string left = y.substr(0, j);
            string right = y.substr(j);

            if (set.find(left) != set.end() && set.find(right) != set.end())
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
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
