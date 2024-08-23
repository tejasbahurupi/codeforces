#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <string.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<string> city(n);
        for (int i = 0; i < n; i++)
        {
            cin >> city[i];
        }
        int ans = 0;
        vector<pair<int, int>> queries(q);
        for (int i = 0; i < q; i++)
        {
            cin >> queries[i].first;
            cin >> queries[i].second;
        }
    }
    return 0;
}