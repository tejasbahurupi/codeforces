#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <string.h>
#define ll long long
using namespace std;
float squareRoot(long long n)
{
    return std::sqrt(static_cast<float>(n));
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long x[n], y[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> x[i] >> y[i];
        }
        long long xs, ys, xt, yt;

        long long flag = 0;
        cin >> xs >> ys >> xt >> yt;
        long long d = (xt - xs) * (xt - xs) + (yt - ys) * (yt - ys);
        for (long long i = 0; i < n; i++)
        {
            long long dis = (x[i] - xt) * (x[i] - xt) + (y[i] - yt) * (y[i] - yt);
            if (dis <= d)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}