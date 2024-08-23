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
    int n;
    cin >> n;
    // if (n == 1)
    // {
    //     cout << "0" << endl;
    //     return;
    // }
    vector<int> a(n);
    map<int, int> mp;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        if (mp[a[i]] > max)
        {
            max = mp[a[i]];
        }
    }
    cout << n - max << endl;

    // int j = 0;
    // for (int i = 0; i < n + 1; i++)
    // {
    //     if (a[i % n] <= a[(i + 1) % n])
    //     {
    //         j = i;
    //         break;
    //     }
    // }
    // int cnt = 0;
    // int i = j;
    // do
    // {
    //     if (a[(i + 1) % n] == a[i % n])
    //     {
    //         i = (i + 1) % n;
    //         continue;
    //     }
    //     else
    //     {
    //         a[(i + 1) % n] = a[i % n];
    //         cnt++;
    //     }
    //     i = (i + 1) % n;
    // } while (i != j);
    // cout << cnt << endl;
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