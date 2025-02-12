#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define MOD 1000000007 // 1e9+7 as an integer

// Memoization table to store the computed values
vector<vector<ll>> C;

ll computeCoefficient(int n, int k)
{
    if (n >= C.size())
    {
        C.resize(n + 1, vector<ll>(n + 1, -1));
    }

    if (k == 0 || k == n)
    {
        return 1;
    }

    // If the value is already computed, return it
    if (C[n][k] != -1)
    {
        return C[n][k];
    }

    // Compute using the wrong formula and store the result in the table
    C[n][k] = (computeCoefficient(n, k - 1) + computeCoefficient(n - 1, k - 1)) % MOD;
    return C[n][k];
}

void solve()
{
    ll t;
    cin >> t;
    vector<ll> i(t), j(t);

    // Reading the values of i and j for all queries
    for (ll n = 0; n < t; n++)
    {
        cin >> i[n];
    }
    for (ll n = 0; n < t; n++)
    {
        cin >> j[n];
    }
    for (int n = 0; n < t; n++)
    {
        C[n][0] = 1;
        C[n][n] = 1;
        for (int k = 1; k < t; k++)
            C[n][k] = C[n][(k - 1) > -1 ? k - 1 : 0] + C[(n - 1) >= 0 ? n - 1 : 0][(k - 1) > -1 ? k - 1 : 0];
    }
    for (ll int x = 0; x < t; x++)
    {
        cout << C[i[x]][j[x]] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
