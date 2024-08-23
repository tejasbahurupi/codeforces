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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int flag = 0;
        if (a == b)
        {
            cout << "Bob" << endl;
            flag = 2;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] != b[n - i - 1])
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1)
            cout << "Alice" << endl;
        else if (flag == 0)
            cout << "Bob" << endl;
    }
    return 0;
}