#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    tuple<ll int, string, vector<ll int>> abc = {1, "abc", {2, 3, 4, 5}};
    cout << get<0>(abc) << endl;
    cout << get<1>(abc) << endl;
    for (ll int i = 0; i < 4; i++)
        cout << get<2>(abc)[i] << endl;
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