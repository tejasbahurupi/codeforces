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
        string s;
        cin >> s;
        long long int cnt = 0;
        long long tot = 0;
        for (auto x : s)
        {
            if (x == '1')
            {
                cnt++;
            }
            else
            {
                if (cnt != 0)
                    tot += (cnt + 1);
            }
        }
        cout << tot << endl;
    }
    return 0;
}