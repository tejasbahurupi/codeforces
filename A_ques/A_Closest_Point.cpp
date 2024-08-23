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
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> a[i];
        }
        if (n != 2)
        {
            cout << "NO" << endl;
        }
        // sort(a.begin(), a.end());
        else
        {
            if (abs(a[0] - a[1]) == 1)
            {
                cout << "NO" << endl;
            }
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}