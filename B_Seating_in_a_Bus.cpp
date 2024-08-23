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
        vector<int> a(n);
        vector<int> b(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            --a[i];
        }
        int flag = 0;
        b[a[0]] = 1;
        for (int i = 1; i < n; i++)
        {
            if (b[a[i]] == 0 && ((b[a[i] - 1] == 1 && a[i] - 1 >= 0) || (b[a[i] + 1] == 1 && a[i] + 1 < n)))
            {
                b[a[i]] = 1;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}