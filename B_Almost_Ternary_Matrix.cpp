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
    int n, m;
    cin >> n >> m;
    int forEven[] = {1, 0, 0, 1};
    int forOdd[] = {0, 1, 1, 0};
    for (int i = 0; i < n; i++)
    {
        if (i % 4 == 0 || i % 4 == 3)
        {
            for (int i = 0; i < m; i++)
            {
                cout << forEven[i % 4] << " ";
            }
        }
        else
        {
            for (int i = 0; i < m; i++)
            {
                cout << forOdd[i % 4] << " ";
            }
        }
        cout << endl;
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