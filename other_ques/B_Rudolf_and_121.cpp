#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <string.h>
#define ll long long
#define Y cout << "YES" << endl;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll int> a(n);
        ll sum = 0;
        for (ll int i = 0; i < n; i++)
        {
            /* code */
            cin >> a[i];
        }
        int flag = 0;
        for (ll int i = 0; i < n - 2; i++)
        {

            if (a[i] == 0)
                continue;
            a[i + 1] -= 2 * a[i];
            a[i + 2] -= a[i];
            a[i] = 0;
            if (a[i + 1] < 0 || a[i + 2] < 0)
            {
                flag = 1;
                break;
            }
        }
        if (a[n - 1] > 0 || a[n - 2] > 0)
        {
            flag = 1;
        }
        if (flag == 0)
            Y else cout << "NO" << endl;
    }
    return 0;
}