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
    int n;
    cin >> n;
    vector<int> x(n), y(n), z(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i] >> z[i];
    }
    ll int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += x[i];
    }
    if (sum != 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += y[i];
        }
        if (sum != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                sum += z[i];
            }
            if (sum != 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}