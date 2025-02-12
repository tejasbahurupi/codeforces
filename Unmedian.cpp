#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

void solve()
{
    ll int n;
    cin >> n;
    vector<ll int> a(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    vector<ll int> b = a;
    sort(b.begin(), b.end());

    vector<pair<int, int>> seqs;

    for (int i = 0; i < a.size(); ++i)
    {
        if (a[i] != b[i])
        {
            if (i + 2 < a.size())
            {
                if (a[i] >= a[i + 1] && a[i] <= a[i + 2])
                {
                    seqs.pb({i + 1, i + 3});
                    for (ll int j = 0; j < b.size(); j++)
                    {
                        if (b[j] == a[i])
                        {
                            b.erase(b.begin() + j);
                            break;
                        }
                    }
                    a.erase(a.begin() + i);
                    i--;
                }
            }
        }
    }

    cout << seqs.size() << endl;
    for (auto op : seqs)
    {
        cout << op.first << " " << op.second << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
