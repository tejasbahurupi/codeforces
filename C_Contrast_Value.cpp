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
    }
    vector<int>::iterator ip;

    // Using std::unique
    ip = unique(a.begin(), a.end());
    // Now v becomes {1 3 10 1 3 7 8 * * * * *}
    // * means undefined

    // Resizing the vector so as to remove the undefined
    // terms
    a.resize(distance(a.begin(), ip));
    int flag;
    if (a.size() == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (a[0] < a[1])
    {
        flag = 0;
    }
    else
    {
        flag = 1;
    }
    long long int cnt = 2;

    for (int i = 0; i < (a.size() - 1); i++)
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