#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int last = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        last = max(last, a[i]);
    }
    vector<int> arr(last + 2, 0);
    int extra = 0;

    for (int i = 1; i <= last; i++)
    {
        if (arr[i] == 1)
        {
            cout << "No" << endl;
            return;
        }
        else if (arr[i])
        {
            arr[i + 1] += arr[i] - 2;
        }
    }

    cout << "Yes" << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}