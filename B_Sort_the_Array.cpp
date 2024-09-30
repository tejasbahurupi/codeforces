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
    // cout << "";
    vector<ll int> a(n);
    ll int start = -1;
    ll int end = -1;
    ll int flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i && a[i] < a[i - 1] && flag == 0)
        {
            if (start == -1)
            {
                start = i - 1;
                end = i;
            }
            else
            {
                end = i;
                if (a[i] < a[start - 1] && start)
                {
                    cout << "no" << endl;
                    return;
                }
            }
        }
        else if (start != -1 && i > end)
        {
            flag = 1;
            if (a[start] > a[i])
            {
                cout << "no" << endl;
                return;
            }
            if (a[i] < a[i - 1])
            {
                cout << "no" << endl;
                return;
            }
        }
        else
        {
            if (flag == 1 && i > end + 1)
            {
                cout << "no" << endl;
                return;
            }
        }
    }
    cout << "yes" << endl;
    if (start == -1 && end == -1)
    {
        cout << 1 << " " << 1 << endl;
        return;
    }
    cout << ++start << " " << ++end << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}