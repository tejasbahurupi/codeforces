#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, pair<int, int>>> a(n);

    for (int i = 0; i < n; ++i)
    {
        int a1, a2;
        cin >> a1 >> a2;
        a[i] = {a1 + a2, {a1, a2}};
    }

    sort(a.begin(), a.end());

    for (const auto &x : a)
    {
        cout << x.second.first << " " << x.second.second << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
