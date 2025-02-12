#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n;
    cin >> n;
    vector<ll int> arrival(n);
    vector<ll int> departure(n);
    for (ll int i = 0; i < n; i++)
    {
        cin >> arrival[i] >> departure[i];
    }
    sort(arrival.begin(), arrival.end());
    sort(departure.begin(), departure.end());
    ll int l = 0, r = 0;
    ll int curr = 0;
    ll int ans = 0;
    while (l < n && r < n)
    {
        if (arrival[l] < departure[r])
        {
            curr++;
            ans = max(curr, ans);
            l++;
        }
        else
        {
            curr--;
            r++;
        }
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int t;
    // cin>>t;
    // while(t--)
    solve();
    return 0;
}