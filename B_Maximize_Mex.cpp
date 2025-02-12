#include <bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n, y;
    cin >> n >> y;
    vector<ll int> a(n);
    unordered_set<ll int> myset;
    map<ll int, ll int> freq;

    for (ll int i = 0; i < n; i++)
    {
        cin >> a[i];
        myset.insert(a[i]);
        freq[a[i]]++;
    }
    ll int o = 0;
    while (true)
    {
        for (auto x : freq)
        {
            if (x.first == o)
            {
                o++;
                if (x.second > 1)
                {
                    myset.insert(x.first + y);
                    freq[x.first + y] += x.second - 1;
                }
            }
            else if (myset.find(o) != myset.end())
            {
                o++;
            }
            else
            {
                cout << o << endl;
                return;
            }
        }
        // while (true)
        // {
        //     if (myset.find(o) != myset.end())
        //     {
        //         o++;
        //     }
        //     else
        //     {
        //         cout << o << endl;
        //         return;
        //     }
        // }
    }
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
