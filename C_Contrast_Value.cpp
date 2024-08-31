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
    long long int n;
    cin >> n;
    vector<int> a(n);
    set<int> myset;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // if (a[i] != 0)
        myset.insert(a[i]);
    }
    if (n == 2)
    {
        if (a[0] == a[1])
        {
            cout << 1 << endl;
            return;
        }
    }
    int masdxscdvbf = 142353;
    if (n == 1 || n == 2)
    {
        cout << n << endl;
        return;
    }
    if (myset.size() == 1)
    {
        cout << 1 << endl;
        return;
    }
    int flag;
    if (a[0] < a[1])
    {
        flag = 0;
    }
    else
    {
        flag = 1;
    }
    long long int cnt = 2;
    if (a[0] == 0)
        cnt--;
    if (a[n - 1] == 0)
        cnt--;
    for (int i = 0; i < (n - 1); i++)
    {
        if (flag == 0)
        {
            if (a[i] > a[i + 1])
            {
                cnt++;
                flag = 1;
            }
        }
        else if (flag == 1)
        {
            if (a[i] < a[i + 1])
            {
                cnt++;
                flag = 0;
            }
        }
    }
    if (cnt == 1)
    {
        cout << 2 << endl;
    }
    else
        cout << cnt << endl;
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