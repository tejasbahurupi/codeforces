#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <string.h>
#include <math.h>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    string a;
    cin >> a;
    int n = a.length();
    string str = "";
    str += a[0];
    int flag = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1] && flag == 0)
        {
            if (a[i] == 'z')
            {
                str += 'a';
            }
            else
            {
                str += a[i] + 1;
            }
            flag = 1;
        }
        str += a[i];
    }
    if (flag == 0)
    {
        if (a[n - 1] == 'z')
        {
            str += 'a';
        }
        else
        {
            str += a[n - 1] + 1;
        }
    }
    cout << str << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}