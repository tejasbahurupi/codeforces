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
        int n;
        cin >> n;
        vector<long long int> x(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> x[i];
        }
        vector<long long int> ans(n);
        ans[0] = x[0] + 1;
        for (int i = 1; i < n; i++)
        {
            while (x[i - 1] >= ans[i - 1])
            {
                ans[i - 1] += ans[i - 2];
            }
            ans[i] = ans[i - 1] + x[i - 1];
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}