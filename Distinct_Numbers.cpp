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
    set<ll int> set;
    for (ll int i = 0; i < n; i++)
    {
        ll int x;
        cin >> x;
        set.insert(x);
    }
    cout << set.size() << endl;
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