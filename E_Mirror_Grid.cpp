#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> a(n, vector<ll>(n));

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            char c;
            cin >> c;
            a[i][j] = c - '0';
        }
    }

    ll left = 0, top = 0, right = n - 1, bottom = n - 1;
    ll ans = 0;
    ll int i = 0;
    while (left <= right && top <= bottom)
    {
        ll cnt = (a[top][left + i] + a[top + i][right] + a[bottom][right - i] + a[bottom - i][left]);

        if (cnt == 1 || cnt == 3)
        {
            ans += 1;
        }
        else if (cnt == 2)
        {
            ans += 2;
        }

        i++;
        if (left + i >= right)
        {
            left++;
            right--;
            top++;
            bottom--;
            i = 0;
        }
    }

    cout << ans << endl;
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
