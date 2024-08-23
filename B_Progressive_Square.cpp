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
        ll int c, d;
        cin >> n >> c >> d;
        int n_sq = n * n;
        map<int, int> mp;
        int x;
        int min = __INT_MAX__;
        for (int i = 0; i < n_sq; i++)
        {
            cin >> x;
            mp[x]++;
            if (x < min)
            {
                min = x;
            }
        }
        if (mp[min] != 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            int a;
            int flag = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    a = min + i * c + j * d;
                    // cout << a << endl;
                    if (mp[a] >= 1)
                    {
                        mp[a]--;
                    }
                    else
                    {

                        flag = 1;
                        break;
                    }
                }
                if (flag == 1)
                    break;
            }
            if (flag == 1)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}