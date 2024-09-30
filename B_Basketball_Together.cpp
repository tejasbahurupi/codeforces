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
    ll int n, d;
    cin >> n >> d;
    vector<ll int> a(n);
    for (ll int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll int left = 0;
    ll int right = n - 1;
    ll int cnt = 0;
    ll int c = 2;
    for (ll int i = n - 1; i > 0; i--)
    {
        if (a[i] > d)
        {
            cnt++;
            right--;
        }
    }
    if (a[0] > d)
    {
        cout << n << endl;
        return;
    }
    while (left < right)
    {
        if (c * a[right] > d)
        {
            left++;
            right--;
            cnt++;
            c = 2;
        }
        else
        {
            c++;
            left++;
        }
    }
    cout << cnt << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int t;
    // cin>>t;
    // while(t--){
    solve();
    // }
    return 0;
}