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
        int n, m, k;
        cin >> n >> m >> k;
        if (n > k && m > k)
        {
            cout << k * k << endl;
        }
        else if (k > n && k > m)
        {
            cout << m * n << endl;
        }
        else
        {
            cout << k * min(n, m) << endl;
        }
    }
    return 0;
}