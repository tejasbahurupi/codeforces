#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <string.h>
#include <math.h>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int s, n;
    cin >> s >> n;
    vector<pair<ll int, ll int>> str(n);
    for (int i = 0; i < n; i++)
    {
        cin >> str[i].first;
        cin >> str[i].second;
    }
    sort(str.begin(), str.end());
    // for (int i = 0; i < n; i++)
    // {
    //     cout << str[i].first << " ";
    //     cout << str[i].second;
    //     cout << endl;
    // }
    for (int i = 0; i < n; i++)
    {
        if (s > str[i].first)
        {
            s += str[i].second;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}