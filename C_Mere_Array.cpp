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
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < min)
        {
            min = a[i];
        }
        b[i] = a[i];
    }
    if (n == 1)
    {
        cout << "YES" << endl;
        return;
    }
    sort(b.begin(), b.end());
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i] && a[i] % min != 0)
        {
            cout << "NO" << endl;
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        cout << "YES" << endl;
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