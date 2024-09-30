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
    ll int n, k;
    cin >> n >> k;
    ll int a[n];
    ll int cnt = 0;
    for (ll int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (ll int i = 0; i < n; i++)
    {
        if (a[i] >= a[k - 1] && a[i] > 0)
        {
            cnt++;
        }
        else
        {
            break;
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