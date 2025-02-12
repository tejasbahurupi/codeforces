#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll int n, x;
    cin >> n >> x;
    vector<long long> cars(n);
    ll int sum = 0;
    ll int maxele = 0;
    for (ll int i = 0; i < n; i++)
    {
        cin >> cars[i];
        if (cars[i] > maxele)
        {
            maxele = cars[i];
        }
        sum += cars[i];
    }
    ll int ans = (sum + x - 1) / x;
    cout << max(ans, maxele) << endl;
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
