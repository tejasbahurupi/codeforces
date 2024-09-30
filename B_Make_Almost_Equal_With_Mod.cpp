
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (auto &i : v)
        {
            cin >> i;
        }
        ll ans = -1;
        ll x = 2;
        while (x)
        {
            set<ll> s;
            for (auto &i : v)
            {
                s.insert(i % x);
            }
            if (s.size() == 2)
            {
                ans = x;
                break;
            }
            x *= 2;
        }
        cout << ans << '\n';
    }
    return 0;
}
