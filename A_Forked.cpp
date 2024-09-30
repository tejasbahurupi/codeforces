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
    ll int a, b;
    cin >> a >> b;
    ll int xk, yk, xq, yq;
    cin >> xk >> yk >> xq >> yq;
    vector<pair<ll int, ll int>> kings(8);
    vector<pair<ll int, ll int>> queens(8);
    kings = {{xk - a, yk - b}, {xk - a, yk + b}, {xk + a, yk - b}, {xk + a, yk + b}, {xk - b, yk - a}, {xk - b, yk + a}, {xk + b, yk - a}, {xk + b, yk + a}};
    queens = {{xq - a, yq - b}, {xq - a, yq + b}, {xq + a, yq - b}, {xq + a, yq + b}, {xq - b, yq - a}, {xq - b, yq + a}, {xq + b, yq - a}, {xq + b, yq + a}};
    ll int cnt = 0;
    set<pair<ll int, ll int>> set;
    // Sort both arrays
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (kings[i].first == queens[j].first && kings[i].second == queens[j].second)
            {
                set.insert(kings[i]);
            }
        }
    }
    cout << set.size() << endl;
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