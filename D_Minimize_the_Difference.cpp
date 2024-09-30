#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define pb push_back
#define ll long long

void solve()
{
    ll int n;
    cin >> n;
    vector<ll int> a(n);
    ll int minVal = __LONG_LONG_MAX__;
    ll int maxVal = 0;

    for (ll int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > maxVal)
        {
            maxVal = a[i];
        }
        if (a[i] < minVal)
        {
            minVal = a[i];
        }
    }
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    vector<ll int> maxind, minind;
    for (ll int i = 0; i < n; i++)
    {
        if (a[i] == minVal)
        {
            minind.pb(i);
        }
        if (a[i] == maxVal)
        {
            maxind.pb(i);
        }
    }

    vector<ll int> mins, maxs;

    for (ll int i = 0; i < minind.size(); i++)
    {
        if (minind[i] > 0 && a[minind[i] - 1] != maxVal)
        {
            if (a[minind[i]] < a[minind[i] - 1])
            {
                ll int x = a[minind[i]] + (a[minind[i] - 1] - a[minind[i]]) / 2;
                mins.pb(x);
            }
        }
        else
        {
            if ((a[minind[i] + 1] - a[minind[i]]) & 1)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
            return;
        }
    }

    for (ll int i = 0; i < maxind.size(); i++)
    {
        if (maxind[i] < n - 1 && a[maxind[i]] > a[maxind[i] + 1])
        {
            ll int x = a[maxind[i]] - (a[maxind[i] + 1] - a[maxind[i]]) / 2;
            maxs.pb(x);
        }
    }

    if (!maxs.empty() && !mins.empty())
    {
        sort(maxs.begin(), maxs.end());
        sort(mins.begin(), mins.end());
        cout << maxs[0] - mins[0] << endl;
    }
    else
    {
        cout << maxVal - minVal << endl;
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
