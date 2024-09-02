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
        int n, k;
        cin >> n >> k;
        char mat[n][n];
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> mat[i][j];
                if (j % k == 0 && i % k == 0)
                {
                    cout << mat[i][j];
                    flag = 1;
                }
            }
            if (flag == 1)
            {
                cout << endl;
                flag = 0;
            }
        }
    }
    return 0;
}